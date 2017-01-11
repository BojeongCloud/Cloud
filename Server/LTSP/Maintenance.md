# 보정 구름 LTSP 서버 운영
동아리 LTSP 서버는 동아리에서 구입한 WeVO NAS Router와 학교에서 제공한 스위치(Switch)를 할용해서 구현하였다.

## 네트워크 부팅 설정하기

일반적인 데스크탑의 경우 부팅하자마자 F2를 눌러서 바이오스설정 화면으로 들어가서 네트워크 부팅 순서를 최우선으로 설정하면 된다.

랩탑(Laptop)에서 LTSP 서버로부터 네트워크 부팅을 하고 싶다면 LTSP 서버에 랜(LAN)선으로 연결한 상태에서 랩탑 전원을 켜고 F12를 누르고 있으면 된다.

## 사용자 추가하기

다음 명령어를 차례대로 입력해서 username의 사용자를 추가하고 비밀번호를 설정한다.

```
sudo useradd -m username -G groupname
sudo passwd username
```
`-m` 옵션은 사용자 디렉토리를 추가한다.
`-G` 옵션은 사용자를 그룹에 추가한다.

`/home/senator/문서/scripts/`에 다수의 사용자를 자동으로 추가하는 스크립트를 작성해놓았으니 활용하도록 한다.

## LTSP 클라이언트에 새로운 패키지 설치하기

```
sudo ltsp-chroot -m
```

~~`-m` 옵션에 대한 설명은 추가바람~~
새로운 패키지를 설치한 후에는 다음 명령어를 입력하여 LTSP 이미지를 갱신해주어야 한다.

```
ltsp-update-image
```

## 설치한 패키지 확인하기
```
apt list --installed
```

특정 패키지가 설치되어 있는지 확인하고 싶으면 다음 명령어를 입력한다:
```
apt list installed_package --installed
```

## 설치한 패키지 완벽하게 삭제하기
```
apt-get purge installed_package
```

## JDK
webupd8team에서 제공하는 Oracle Java를 설치한다. 9 버전은 자바 가상머신을 사용하는 다른 패키지와의 호환성이 떨어지기 때문에, 8 버전을 설치한다.

```
sudo add-apt-repository ppa:webupd8team/java
sudo apt-get update
sudo apt-get install oracle-java8-installer
```

## wget
wget 명령어를 사용해서 URL에 연결된 파일을 다운받을 수 있다.

## `/usr/local/`
사용자가 직접 컴파일하거나 설치하는 프로그램들은 이곳에 위치시킨다.

## 디렉토리 복사
디렉토리를 복사할 때는 `-r` 옵션을 추가한다.

## PyCharm Edu
공식 홈페이지에서 다운받아서 압축을 풀고 바로 실행시켜주면 된다.
스크립트를 실행하도록 되어있는데, 아이콘 형태로 만들어 놓는 것이 좋을 것 같다.

## 참고문헌
[webupd8 자바 설치하기](http://www.webupd8.org/2015/02/install-oracle-java-9-in-ubuntu-linux.html)

[PyCharm Edu 설치](https://www.jetbrains.com/pycharm-edu/download/#section=windows-version)

[`/usr/local/` 파일시스템 설명](http://refspecs.linuxfoundation.org/FHS_2.3/fhs-2.3.html#USRLOCALSHARE1)
