# TinyMatrix
A Tiny Matrix, also called e-jewel, is a little electronic Jewel that changes animations every time you press the button.

<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/both.jpg " width="400" />

# Programming the ATTINY4313

In order to program the AT TINY 4313 you first need to install the ATTiny core in Arduino 1.6.4.

You can do that by following [this tutorial] (https://github.com/SpenceKonde/ATTinyCore)

To connect the ATTINY to the Arduino board perhaps you can build [your own shield] (http://www.instructables.com/id/Arduino-ATtiny2313-Programming-Shield/step2/Prototype-and-Pinout/).

Now you can load Arduino's sketches.

# Loading sketches

In this repository you will find an Arduino sketch to load some animation ([Arduino code](https://github.com/FablabTorino/tinyMatrix/tree/master/code/arduino%20programming/LedMatrix_ATtiny%20))

and a Processing sketch to create new ones ([Processing code](https://github.com/FablabTorino/tinyMatrix/tree/master/code/Processing%20sketch)).

This last sketch will print on the console the code that you can copy and paste in Arduino.

To create new animations you have to play the processing program.

A window like this will open

<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/4.png " width="160" />  

Then you just draw your animation frame by frame.

<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/3.png" width="160" />
<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/4.png" width="160" />
<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/3.png" width="160" />
<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/4.png" width="160" />

To save a new frame press 's', and when you are done press 'a' so you get the number of frames and the complete code.


Now copy what Processing printed to the console

<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/5.png " height="300" />

and paste it in the Arduino sketch in the images.h file

<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/1.png " height="300" />

now in the void loop section of the Arduino sketch create a new 'case' in the switch function

<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/6.png " height="200" />

now you can upload the code to the ATTINY

and you are done!


# Creating the jewel

You can download the .dxf files from [here] (https://github.com/FablabTorino/tinyMatrix/tree/master/design/DXF) or you

can draw your own, just remember to use a 6mm poplar plywood.



First thing to do is to build the structure following this instructions:
</br>
</br>
</br>
<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/tinyPage_2.jpg " width="800" />
</br>
</br>
</br>
The whole process should look like this:
</br>
</br>
</br>
<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/Process.jpg"width="900" />
</br>
</br>
</br>

## Notes about the wiring
To manipulate pins and leds take a look at this scheme:
</br>
</br>
<img src="https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/7.png"width="200" />
</br>
</br>
Green numbers rapresent the led-matrix's pin and red numbers are the ATTINY's ones.

So, for example, if you want to turn the first led on (Up-Left) you have to set:

pin15=HIGH;
</br>
pin1=LOW;





# BOM

| part		        | Quantity | Part number | Distributor Part Number |  LINK|
| -------------     |:--------:| :--------:| :--------:| :--------:|
| pushbutton        | 1 | 450-1650-ND | FSM4JH |
| coin battery      | 1 | P189-ND | CR2032 |
| battery  holder   | 1 | BC2032-F1-ND	| BC2032-F1 |
| 100K resistors    | 1 | CF18JT100KCT-ND | CF18JT100K |
| AT TINY 4313      | 1 | ATTINY4313-PU-ND | ATTINY4313-PU |
| 5X7 red matrix    | 1 | 160-1555-5-ND	| LTP-757KR |


#Credits

The project was inspired By [TigerUp] (https://sites.google.com/site/tinymatrix/) and customized by Franco Magni and Federico Vanzati in 2012, at Fablab Torino, further developed by Stefano Paradiso, Tommaso Laterza and Lorenzo romagnoli in 2015.


# Lasercut Case made Paso & Giò

Added a cat-shaped box. You can find it in /design/DXF/TinyMatrixGatto.dxf

<img src="http://imgur.com/a/bPmmB" height="300" />
