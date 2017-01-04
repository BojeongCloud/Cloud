# 부팅시 자동으로 autossh 실행되도록 설정하기

## systemd
이전까지 우분투는 `upstart`를 사용해서 부팅시 자동으로 실행되는 스크립트를 관리해왔다. 하지만 16.04 LTS 버전을 포함한 최근 버전은 `systemd`를 사용해서 부팅시 자동으로 실행되는 스크립트를 관리한다.

다음 명령어를 동아리 서버 부팅시에 자동으로 실행되도록 설정하고자 한다.

```
autossh -M 0 -N -q -o "ServerAliveInterval 60" -o "ServerAliveCountMax 3" -p 22 -l pi bjcrpi.strangled.net -L 8080:localhost:22 -i /home/administrator/.ssh/id_rsa
```

하지만, SSH 접속을 하기 위해서는 비밀번호를 입력해야 하는 과정이 필요하다. 이는 다소 번거롭기 때문에, 비밀번호를 입력하지 않아도 접속이 허용되도록 해주고자 한다.

## 비밀번호 없이 SSH 접속 허용하기
리버스 SSH 터널링은 연결되는 두 컴퓨터 모두 SSH 서버로서 작동한다. 그리고 서로 접속하는데 비밀번호를 입력하지 않아도 되도록 하기 위해서는 같은 작업을 양쪽에서 반복해야 한다. 두 서버가 서로 비밀번호를 전달받지 않아도 접속을 허용하기 하기 위해서는 서로의 RSA 공개/개인키를 전달받아야 한다.

학교 네트워크에 가려져서 외부에서 접속이 불가능한 동아리 서버를 (가), 외부에서 접근이 가능한 공개 서버를 (나)라고 하자. 우선 (가)에서 RSA 키를 생성해서 (나) 컴퓨터에게 전달하도록 하자.

### (가)에서 RSA 공개/개인키 생성하기
터미널에서 `ssh-keygen`을 입력하면 다음 문구가 뜬다.
```
Generating public/private rsa key pair.
Enter file in which to save the key (/home/administrator/.ssh/id_rsa):[Enter key]
Enter passphrase (empty for no passphrase): [Press enter key]
Enter same passphrase again: [Pess enter key]
Your identification has been saved in /home/administrator/.ssh/id_rsa.
Your public key has been saved in /home/administrator/.ssh/id_rsa.pub.
```
RSA 키를 저장할 파일과 passphrase 등을 입력할 것을 요구하는데, 필수 사항은 아니므로 입력하지 않고 넘어가도록 하자.

### (가)에서 생성한 RSA 키를 (나)에게 전달하기
```
ssh-copy-id -i ~/.ssh/id_rsa.pub pi@bjcrpi.strangled.net
```
(가)에서 (나)로 처음 접속하는 것이므로 비밀번호를 요구하지만, 차후 접속을 시도할 때는 비밀번호를 요구하지 않는다.

> (나)에서 (가)로 RSA 키를 전달하는 것은 위에서 설명한 것과 크게 다르지 않으므로 자세한 설명은 생략하겠다. 리버스 SSh 터널링을 구현한 다음에 (나)에서 (가)로 접속하기 위해서는 `ssh administrator@localhost -p 8080`을 입력해야 한다.

## systemd autossh 스크립트 만들기

깃허브에 게시된 스크립트를 일부 수정해서 사용하였다.

```
[Unit]
Description=Keeps a tunnel to 'bjcrpi.strangled.net' open
After=network-online.target

[Service]
User=administrator
# -p [PORT]
# -l [user]
# -M 0 --> no monitoring
# -N Just open the connection and do nothing (not interactive)
# LOCALPORT:IP_ON_EXAMPLE_COM:PORT_ON_EXAMPLE_COM
ExecStart=/usr/bin/autossh -M 0 -N -q -o "ServerAliveInterval 60" -o "ServerAliveCountMax 3" -p 22 -l pi bjcrpi.strangled.net -R 8080:localhost:22 -i /home/administrator/.ssh/id_rsa

[Install]
WantedBy=multi-user.target
```

위 내용을 `/etc/systemd/system/autossh.service`로 저장을 하고, 다음 명령어를 입력해서 부팅 스크립트로 등록한다.

```
sudo systemctl enable autossh.service
```

다음 명령어로 autossh 부팅 스크립트를 실행한다.
```
sudo systemctl start autossh.service
```

다음 명령어로 autossh 부팅 스크립트의 상태를 확인하다.
```
sudo systemctl status autossh.service
```

## 참고문헌

[비밀번호 없이 SSH 접속 허용하기](http://www.thegeekstuff.com/2008/11/3-steps-to-perform-ssh-login-without-password-using-ssh-keygen-ssh-copy-id/)

[Github Gist - systemd service for autossh](https://gist.github.com/thomasfr/9707568)
