# 3D 프린터

## 메인보드
![](/3D_Printer/Cloud_3D_Printer_Motherboard.png)

[Melzi Reprap 1.1](http://reprap.org/wiki/Melzi)  

전원부분이 조금 타버리고 압출기의 모터가 wobble거리는 문제가 있었다.  
그래서 RAMP 1.4 + Arduino Mega 2560 메인보드로 교체하려고 했으나,  
갑자기 정상작동해서 교체하지는 않았다.

### 컴퓨터가 Melzi 메인보드를 인식하지 못할 때
프린터가 연결된 컴퓨터를 바꾸면 Melzi 메인보드를 인식하지 못할 수 있다.  
Mac이나 Linux는 자동으로 드라이버를 인식하는 경우가 많은데,  
Windows는 드라이버를 수동으로 설치해주어야 한다.
이 때는 다음 링크를 통해서 드라이버를 다운받는다. [FTDI driver 다운받기](http://www.ftdichip.com/Drivers/VCP.htm)  
드라이버를 설치하는 방법은 다음 링크를 참고한다. [FTDI driver 설치하기](http://forums.reprap.org/read.php?1,417199,418768#msg-418768)

#### Windows용 드라이버 설치

1. 위에서 다운로드 받은 FTDI 드라이버의 압축을 푼다.
2. 장치관리자를 열어서 `FT232R USB UART`을 찾는다.
3. 마우스 오른쪽 버튼을 클릭해서 `속성 > 드라이버 > 드라이버 업데이트`를 선택
4. 압축을 푼 FTDI 드라이버의 위치를 찾아준다.

## Software

사용하게될 소프트웨어는 크게 세 가지로 구분할 수 있다.  

 - 호스트(Host)  
   컴퓨터와 3D 프린터를 연결해주는 소프트웨어이다.  
   3D 프린터의 X, Y, Z축의 움직임과 압출기 그리고 Hotend와 Heated Bed의 온도를 제어할 수 있다.
   ex) Repetier Host, Printrun
 
 - 슬라이서(Slicer)  
   로드한 STL 파일을 각 층(layer)별로 잘라서 압출기가 움직이는 경로를 정해준다.  
   ex) Cura, Sli3r
 
 - CAD  
   모델링 프로그램이다. FreeCAD도 괜찮고 123D Design을 사용하는 것도 좋다. 
   ex) FreeCAD, AutoCAD, 123D Design, Blender
 
보정 구름에서는 모델링 교육을 하지 않을 것이므로  
우리가 3D 프린터를 다루기 위해 필수적으로 사용하는 것은 *호스트*와 *슬라이서*이다.

우리는 Repetier Host와 Sli3r을 사용한다.

### Repetier Host

Repetier Host 안에서 Slicer를 실행시킬 수 있으므로 간편하게 Repetier Host만 사용하도록 하자.  
각 소프트웨어에 대한 자세한 설명은 ~~추가바람~~
