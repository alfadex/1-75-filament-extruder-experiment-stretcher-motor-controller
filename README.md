# 1-75-filament-extruder-experiment-stretcher-motor-controller

Here i monitor witdth of 1.75 abs filament for 3d printers with the use of TSL1401CL,you can find it here     https://www.thingiverse.com/thing:704897

It has an output 0-2 v dc, voltage correspnd filamnt witdth . For axample 0.8v is 0.8mm width filament ,1.85v is 1.85mm width filament. I get this voltage and insert
it to an analog input of an arduino nano and controlling a nema 17 stepper motor with the use of  a4988 motor controller.
The aim is to have a constant 1.75mm filanet width. 

The idea is, when width is for example 1.2mm, then i have to slow down strecher motor speed, so that filament to be thicker close to 1.75mm and when width is for example
1.9mm motor speed should be higher so that filament get thinner.

You can see a video a his inintial stage https://www.youtube.com/watch?v=6UCiZd1d8qo
