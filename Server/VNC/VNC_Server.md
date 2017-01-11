# Virtual Network Computing(VNC) Server

리눅스 CUI 터미널 환경에 익숙한 사용자는 SSH로 충분하겠지만, 때로는 GUI 상에서 작업을 해야할 필요도 있다. 따라서 보정 구름에서도 VNC 서버를 운영하고 있다. VNC 클라이언트 사용법은 VNC Viewer를 기준으로 설명하겠다.

## VNC 서버 설치

```
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install x11vnc
```

`x11vnc` 패키기를 설치해서 VNC 서버를 구축한다.
> 구글링 결과 다른 사용자들은 `vnc4server`라는 패키지를 설치해서 VNC 서버를 구축하기도 하였다. 하지만 VNC 클라이언트에서 회색 화면을 출력하는데 그치는 문제를 해결하지 못해서 `x11vnc`를 사용하였다.

```
x11vnc -storepasswd
```
VNC 서버에 접속하는데 사용할 비밀번호를 설정한다.

부팅시 자동으로 VNC 서버를 시작하도록 설정하였는데, 그 과정은 참고문헌을 읽어보도록 한다.

다음 명령어를 입력해서 VNC 서버를 수동으로 시작해줄 수 있다.

```
x11vnc -auth guess -forever -loop -noxdamage -repeat -rfbauth /home/senator/.vnc/passwd -rfbport 5900 -shared
```

### 참고문헌 수정사항
한 가지 짚고 넘어갈 점이 있다. 루트(root) 권한으로 VNC 서버를 실행시키는 것이 불가능한데, 따라서 자동실행 스크립트를 수행하는 사용자를 명시해 주어야 한다.

`x11vnc.service` 파일을 다음과 같이 수정한다.

```
[Unit]
Description=Start x11vnc at startup.
After=multi-user.target

[Service]
User=senator    # User needs to be specified
Type=simple
ExecStart=/usr/bin/x11vnc -auth guess -forever -loop -noxdamage -repeat -rfbauth /home/senator/.vnc/passwd -rfbport 5900 -shared -display :0

[Install]
WantedBy=multi-user.target
```

## VNC 클라이언트 설치
서버에 접속하는데 사용할 클라이언트 소프트웨어는 [VNC Viewer](https://www.realvnc.com/download/viewer/)이다. 리눅스, 맥, 윈도우, 안드로이드 등 다양한 운영체제를 지원한다.

클라이언트 상단 공란에 VNC 서버 주소를 입력한다.

```
bjcrpi.strangled.net:5900
```

## 참고문헌

[우분투 16.04 VNC 서버 구축(영문)](http://www.wolffhaven45.com/blog/linux/x11vnc-server-installation-ubuntu-16-04-xenial-xerus/)
