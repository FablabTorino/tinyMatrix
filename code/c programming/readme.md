##Instructions

this folder contains two version of the firmware:

**TinyMatrix**: the original project  
**TinyMatrixCountdown**: contains also a countdown (from 9 to 0) animation.

This is not an Arduino like program but there is a make file to compile it. Make sure you have the AVR-GCC toolchain installed.
To compile the program:
1. open a command shell and move to the Tiny Matrix directory
2. edit the Makefile `PROGRAMMER` field with the AVR programmer name you have
3. run the command "make all" and the HEX file to load on the ATtiny will be generated
4. run make fuse and the fuses for the Attiny4313 will be burned
5. run make program to flash the firmware on the Attiny4313

##Functioning 
TODO: description of the logic

##Credits
The origial projects was created by TigerUp (https://sites.google.com/site/tinymatrix/)