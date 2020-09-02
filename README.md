# Draw
Simple C-based screen drawing example for Commodore PET machines, using VS2019, CC65 & WinVICE

After discovering the awesome CC65 C compiler for 6502 8-bit systems I wondered if it was possible setup a Visual Studio environment for C-based Commodore PET coding. The short
answer is ***YES***, including pressing F5 to launch your application directly in WinVICE ! 

**N.B. Though this targets the Commodore PET, you can easily tweak it for the C16, C64 or C128 simply by changing the CC65 & WinVICE targets in the project settings.**

This configuration should work with any recent version of Visual Studio, including the Community Edition. In addition there are a few things you will need to have setup first, they 
are linked to below:

1) CC65
    a) http://sourceforge.net/projects/cc65/files/cc65-snapshot-win32.zip
    b) Unzip CC65 to C:\CC65
2) GNU Make for Windows – choose version to match your PC
    a) 32 bit: ftp://ftp.equation.com/make/32/make.exe
    b) 64 bit: ftp://ftp.equation.com/make/64/make.exe
    c) Copy to C:\CC65
3) WinVICE – choose version to match your PC
    a) 32 bit: http://sourceforge.net/projects/viceemu/files/releases/binaries/windows/WinVICE-2.4-x86.zip/download
    b) 64 bit: http://sourceforge.net/projects/viceemu/files/releases/binaries/windows/WinVICE-2.4-x64.zip/download
    c) Unzip WinVICE where ever you want
  
Additionally you will need to ensure the following enviroment variables are set:

1) CC65_HOME = C:\cc65
2) CC65_INC = C:\cc65\include
3) LD65_CFG=C:\cc65\cfg
4) LD65_LIB=C:\CC65\lib
5) MAKE_HOME = C:\cc65
6) WINVICE = C:\Users\birtj\Documents\WinVICE-2.4-x64
7) Add C:\cc65\bin to PATH

**N.B. My CC65 & WinVICE are installed to my D: drive, so you will need to go through the project properties changing the drive letter if you've installed them to the C: drive**

A shout out to https://www.soigeneris.com/, his PDF guide to running with Visual Studio 2013 was a great help in getting this mess working.
