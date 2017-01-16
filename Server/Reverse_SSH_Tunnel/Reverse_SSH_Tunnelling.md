# 리버스 SSH 터널링

![문제상황](./Circumstances.png)

학교는 보안상의 문제로 외부로부터의 점근을 막아놓는다. 하지만 학교 동아리 안에서 서버를 운영 중이고, 학교 밖에서 서버에 접근하고 싶은 경우 어떻게 해야 하는가? 리버스 SSH 터널링은 그 대안 중 하나로서 비교적 간단하게 동아리 서버를 외부로 노출시켜줄 수 있다. 단, 리버스 SSH 터널링이 가능하기 위해서는 적어도 동아리 서버가 인터넷에 연결되고 외부 서버에 접근이 가능해야 한다.

- 동아리 서버 (가)
    - 공유기에 가려져서 외부에서 접근이 불가능한 컴퓨터
    - user_ga@192.168.0.1
    - SSH 포트 번호: 25565

- 개인 개인 컴퓨터 (나)
    - 외부에서 접근이 가능한 컴퓨터
    - user_na@211.245.153.6
    - SSH 포트 번호: 22222

동아리 서버 (가)에서 터미널을 열고 다음 명령어를 입력한다.

```
ssh -R 19999:localhost:25565 -p 22222 user_na@211.245.153.6
```
이 명령어의 의미를 풀이하면 다음과 같다:  
> 포트 22222번을 사용해서 `user_na@211.245.153.6`에 접근하는데, 동아리 서버 (가)의 25565번 포트(서버 (가) 기준 localhost의 25565번 포트)와 개인 컴퓨터 (나)의 19999번 포트가 연결되도록 한다.

```
ssh user_ga@localhost -p 19999
```

> 참고: 19999번 포트 대신에 사용되지 않는 다른 포트 번호를 선택해도 된다.

## 원격 포트 포워딩(Remote Port Forwarding)
리버스 SSH 터널링 과정에서 원격 포트 포워딩이 사용되는데, 개인 컴퓨터 (나)에서 SSH 서버가 원격 포트 포워딩을 허용해야 한다. 개인 컴퓨터 (나)의 SSH 서버 설정을 조정하기 위해서는 `/etc/ssh/sshd_config` 파일을 열어서 수정해야 한다. `GatewayPorts no` 항목이 있다면 `GatewayPorts yes`로 바꾸어 주어야 한다. 만약 언급되지 않았다면 원하는 위치에 `GatewayPorts yes`를 추가해주도록 한다.

> nano 편집기를 사용한다면 `ctrl+w`를 누르고 찾고자하는 문자열을 입력해서 간편하게 수정할 수 있다.

당연한 내용이라 위에서 언급을 하진 않았지만, 컴퓨터 (가), (나) 모두 SSH 서버가 설치되어 있어야 한다.

## 참고문헌

1. [리버스 SSH 터널링 질의응답 (영어) ](http://unix.stackexchange.com/questions/46235/how-does-reverse-ssh-tunneling-work)
2. [이해하기 쉬운 설명 (영어)](https://www.howtoforge.com/reverse-ssh-tunneling)
3. [원격 포트 포워딩](http://blog.trackets.com/2014/05/17/ssh-tunnel-local-and-remote-port-forwarding-explained-with-examples.html)
