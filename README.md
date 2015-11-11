# TinyMatrix
EN a Tiny Matrix, also called e-jewel, is a little electronic Jewel that changes animations every time you press the button.

# BOM

| part		        | Quantity | Part number | Distributor Part Number |  LINK|
| -------------     |:--------:| :--------:| :--------:| :--------:|
| pushbutton        | 1 | 450-1650-ND | FSM4JH | 
| coin battery      | 1 | P189-ND | CR2032 |
| battery  holder   | 1 | BC2032-F1-ND	| BC2032-F1 |
| 100K resistors    | 1 | CF18JT100KCT-ND | CF18JT100K |
| AT TINY 4313      | 1 | ATTINY4313-PU-ND | ATTINY4313-PU |
| 5X7 red matrix    | 1 | 160-1555-5-ND	| LTP-757KR |

# The pendant

The Process

![Alt The process](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/Process.jpg)

You can download the .dxf files from [here] (https://github.com/FablabTorino/tinyMatrix/tree/master/design/DXF).
 
# The pin

First thing to do is to build the structure following [this instructions](https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/tinyPage_2.jpg).

Then to manipulate pins and leds you can have a look at [this scheme]
(https://github.com/FablabTorino/tinyMatrix/blob/master/design/pendant/PinsGrid.jpg) .




# Programming the ATTINY4313

In order to program the AT TINY 4313 you first need to install the ATTiny core in Arduino 1.6.4.

You can do that by following [this tutorial] (https://github.com/SpenceKonde/ATTinyCore)

To connect the ATTiny to the Arduino board perhaps you can build [your own shield] (http://www.instructables.com/id/Arduino-ATtiny2313-Programming-Shield/step2/Prototype-and-Pinout/)

Now you can load Arduino's sketches. 
In this repository you will find a sketch to load some animation (Arduino code)
and a sketch to create new ones (Processing code). This last sketch will Serial-print the code that you can copy and paste in Arduino.








The project was inspired By TigerUp (tigeruppp?gmail?com) https://sites.google.com/site/tinymatrix/ and customized by Franco Magni and Federico Vanzati in 2012, at Fablab Torino. 
