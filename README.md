# GBC_LED
Led board which does not rely on flexboard and optionally driven by ATTiny.
I'll be updating this as I receive boards from factory.

There are 2 ways to run this board:

- Dumb/static: Buy just the resistors and leds of the bom.
- Microcontroller: Buy the full BOM.


!!!! ONLY bridge J1,J2,J3 when NOT using the microcontroller. !!!!
If you just want a static led this is possible without microcontroller by bridging the jumpers 1 -3.


# Goal
The goal of this board is to have an opensource and cheap board 
where you can choose the leds and how crazy you want to build it.
Flash a sketch to it with Arduino and you got your own custom board.

Eventually this should be build on a 0.4mm board but for testing and
debuggering I'm using 0.6mm 2 layer pcb to dampen the cost/unit.

Absolute budget build.
# BOM
Testpoints dont need to be bought, even when using microcontroller.


![BOM image](https://github.com/moxl-420/GBC_LED/blob/main/V1_BOM.PNG)

# V2

- There are still some issues on the microcontroller side which I didn't adress in this version. 
- The main issues of V2 was fitment.
- Static led function is confirmed
- 0.6mm thick pcb can be used.
- The rounded side of the silkscreen around the leds is the ground.

New form of the pcb:
![V2](https://imgur.com/n4GeLiC.jpg)

Fitment in a clear shell:
![V2](https://i.imgur.com/caS1nbc.jpg)
![V2](https://i.imgur.com/G8ZTexh.jpg)

1.8k ohm resistors were used.
Compatibility with Funnyplaying IPS is confirmed. 
I did snip the upper pads of the pcb and used 
- J1 as VCC 
- GND of L1 for GND 
![V2](https://imgur.com/r9MXTSA)

# V1.1

1.8k ohm resistors were used for V1.1
![V1-1](https://i.imgur.com/FbSPFik.jpg)
![V1-1](https://i.imgur.com/n3EdLHf.jpg)

# V1

- Untested and has testpoints for reflashing.
- The numbering of the testpins matches the phsyical pins of the ATtiny85.

If you don't want to run or buy an ATtiny85-20SU you can bridge J1,J2 and J3.

!!!! ONLY bridge these when NOT using the microcontroller. !!!!

Schematic of V1:
![Schematic](https://github.com/moxl-420/GBC_LED/blob/main/V1_2.PNG)

PCB preview:
![pcb](https://github.com/moxl-420/GBC_LED/blob/main/v1_preview.PNG)

received PCB:
![pcb](https://i.imgur.com/xtOw7gH.jpg)

1.8k ohm resistors were used for V1
![V1](https://imgur.com/RDwTxyQ.jpg)
