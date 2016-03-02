# 3D 프린터

## 메인보드
![](/3D_Printer/Cloud_3D_Printer_Motherboard.png)

[Melzi Reprap 1.1](http://reprap.org/wiki/Melzi)  

전원부분이 조금 타버리고 압출기의 모터가 wobble거리는 문제가 있었다.  
그래서 RAMP 1.4 + Arduino Mega 2560 메인보드로 교체하려고 했으나,  
갑자기 정상작동해서 교체하지는 않았다.

### Can't connect to the Melzi (FTDI driver problem)
There has been an issue where a FTDI driver update, pushed out through Microsoft update, disables Melzi controllers that have a non-genuine FTDI chip. This chip is used for USB communication, so the board may look like it's working (LED flashing) but doesn't show up correctly, and Arduino IDE/Pronterface can't connect to it.
This thread describes the problem in detail: http://hackaday.com/2014/10/24/ftdi-screws-up-backs-down/ 
Apparently, the only way to visually check the chip is described here: http://hackaday.com/2014/10/24/ftdi-screws-up-backs-down/#comment-2059852 
There is a thread about it on the reprap forums here: http://forums.reprap.org/read.php?1,417199 
There is a work-around for the problem (forcing driver installation, for Windows) here: http://forums.reprap.org/read.php?1,417199,418768#msg-418768
If the chip has been effected by the driver (ie deemed fake), the device PID is set to '0000'. You can check this in the Mac System Profiler, or on Ubuntu open a terminal window, run "lsusb" and it should show a device at "0403:0000". If you use Ubuntu, there is a tool for resetting the device PID correctly: http://www.minipwner.com/index.php/unbrickftdi000 Then update the FTDI drivers on your machines so it doesn't rebrick the FTDI chip.

프린터가 연결된 컴퓨터를 바꾸면 Melzi 메인보드를 인식하지 못할 수 있다.  
이 때는 다음 링크를 통해서 드라이버를 다운받는다. [FTDI driver 다운받기](http://www.ftdichip.com/Drivers/VCP.htm)  
드라이버를 설치하는 방법은 다음 링크를 참고한다. [FTDI driver 설치하기](http://forums.reprap.org/read.php?1,417199,418768#msg-418768)

## Software

사용하게될 소프트웨어는 크게 세 가지로 구분할 수 있다.  

 - 호스트(Host)  
	ex) Repetier Host, Printrun
 
 - 슬라이서(Slicer)  
	ex) Cura, Sli3r
 
 - CAD  
	ex) FreeCAD, AutoCAD, 123D Design
 
모델링을 하지 않을 것이라면 CAD 프로그램을 필요하지 않으므로  
3D 프린터를 다루기 위해 필수적으로 사용하는 것은 *호스트*와 *슬라이서*이다.

보정 구름에서는 Repetier Host와 Sli3r을 사용한다.

### Repetier Host

Repetier Host 안에서 Slicer를 실행시킬 수 있으므로 간편하게 Repetier Host만 사용하도록 하자.  
각 소프트웨어에 대한 자세한 설명은 ~~추가바람~~
