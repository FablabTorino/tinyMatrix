# TinyMatrix
EN a Tiny Matrix, also called e-jewel, is a little electronic Jewel that changes animations every time you press the button.

![Alt The process](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/both.jpg =250x250)

# Programming the ATTINY4313

In order to program the AT TINY 4313 you first need to install the ATTiny core in Arduino 1.6.4.

You can do that by following [this tutorial] (https://github.com/SpenceKonde/ATTinyCore)

To connect the ATTINY to the Arduino board perhaps you can build [your own shield] (http://www.instructables.com/id/Arduino-ATtiny2313-Programming-Shield/step2/Prototype-and-Pinout/)

Now you can load Arduino's sketches. 

# Loading sketches

In this repository you will find a sketch to load some animation ([Arduino code](https://github.com/FablabTorino/tinyMatrix/tree/master/code/arduino%20programming/LedMatrix_ATtiny%20))

and a sketch to create new ones ([Processing code](https://github.com/FablabTorino/tinyMatrix/tree/master/code/Processing%20sketch)). This last sketch will Serial-print the code that you can copy and paste in Arduino.

To create new animations you have to play the processing program
A window like this will open ![Alt The process](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/4.png =250x)

Then you just draw your animation frame per frame. 
![Alt The process](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/3.png =250x)
To save frames press 's' and when you finish press 'a' so you get the number of frames and the complete code.

Now copy what you printed in the Serial
![Alt The process](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/5.png =250x)

and paste it in the Arduino's sketch
![Alt The process](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/1.png =250x)

now in the other tab create a 'case' in the switch function
![Alt The process](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/6.png =250x)
and you are done!


# The Process






You can download the .dxf files from [here] (https://github.com/FablabTorino/tinyMatrix/tree/master/design/DXF).
 


First thing to do is to build the structure following [this instructions](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/tinyPage_2.jpg).

Then to manipulate pins and leds you can have a look at [this scheme]
(https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/PinsGrid.jpg) .










# BOM

| part		        | Quantity | Part number | Distributor Part Number |  LINK|
| -------------     |:--------:| :--------:| :--------:| :--------:|
| pushbutton        | 1 | 450-1650-ND | FSM4JH | 
| coin battery      | 1 | P189-ND | CR2032 |
| battery  holder   | 1 | BC2032-F1-ND	| BC2032-F1 |
| 100K resistors    | 1 | CF18JT100KCT-ND | CF18JT100K |
| AT TINY 4313      | 1 | ATTINY4313-PU-ND | ATTINY4313-PU |
| 5X7 red matrix    | 1 | 160-1555-5-ND	| LTP-757KR |


The project was inspired By [TigerUp] (https://sites.google.com/site/tinymatrix/) and customized by Franco Magni and Federico Vanzati in 2012, at Fablab Torino. 
