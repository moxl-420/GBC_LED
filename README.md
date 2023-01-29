# GBC_LED
Led board which does not rely on flexboard and optionally driven by ATTiny.
I'll be updating this as I receive boards from factory.

# Goal
The goal of this board is to have an opensource and cheap board 
where you can choose the leds and how crazy you want to build it.
Flash a sketch to it with Arduino and you got your own custom board.

Eventually this should be build on a 0.4mm board but for testing and
debuggering I'm using 0.6mm 2 layer pcb to dampen the cost/unit.

Absolute budget build !

# V1
If you don't want to run or buy an ATtiny85-20SU you can bridge J1,J2 and J3.
!! ONLY bridge these when not using the microcontroller. !!

- Untested and has testpoints for reflashing.
- The numbering of the testpins matches the phsyical pins of the ATtiny85.
