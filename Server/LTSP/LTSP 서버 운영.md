# 보정 구름 LTSP 서버 운영
동아리 LTSP 서버는 동아리에서 구입한 WeVO NAS Router와 학교에서 제공한 스위치(Switch)를 할용해서 구현하였다.

랩탑(Laptop)에서 LTSP 서버로부터 네트워크 부팅을 하고 싶다면 LTSP 서버에 랜(LAN)선으로 연결한 상태에서 랩탑 전원을 켜고 F12를 누르고 있으면 된다.

## 사용자
사용자 이름과 비밀번호는 다음과 같습니다.
- ID: cloudx (x : 1, 2, ...)
- PW: 초기 비밀번호는 아이디와 동일

> 비밀번호를 바꾸려면 로그인된 상태에서 터미널을 열고(`ctrl` + `alt` + `T`) `passwd`을 입력한다.

## 문제 해결

### 컴퓨터 부팅이 안됩니다.
> 키보드나 마우스에 전원이 들어오지 않는다.

메인 메모리가 메인보드에 잘 연결되어 있지 않으면 제대로 부팅이 되지 않을 수 있다. 스스로 컴퓨터를 분해하지 말고 집정관에게 문의해서 해결하도록 한다.

## TODOs
- 사용자 추가하기
- 필요한 프로그램 설치하기
- 외부 서버에 SSH 터널링하기
