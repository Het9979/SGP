SMART WATER LEVEL MANAGEMENT SYSTEM 
It consists of arduino uno , an ultrasonic sensor , buzzer , breadboard and L293D motor driver , DC Motor and connecting wires. 
![smart water tank management system](https://user-images.githubusercontent.com/80376658/163232182-4f6fb6a7-e06f-44f8-92d9-494140a30164.png)
Connections of the above mentioned components are shown in the image.
So in this project the ultrasonic sensor is placed in overhead water tank and the height of the water is known to us . After that the ultrasonic sensor 
calulates the amount of water present in the tank by sending ultrasonic waves and measuring the time taken between sending and reveiving . 
Once the arduino gets the water level in tank then if the water level is lower than the preset value than with the help of L293D the DC motor turns on and 
when the water level in tank reaches a point less than the maximum capacity the arduino turns off the DC Motor.
**Here we have used DC Motor for demonstration purpose but in real we use the Water Pump used to fill the water tank**
