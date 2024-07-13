# things in here.

[download arduino ide from here](https://www.arduino.cc/en/software) (i have Arduino IDE 2.3.2 installed on my win11 64bit system)

then you need CH340 driver thingy. [download from here](https://sparks.gogo.co.nz/ch340.html) if for some reason site is nonexistent, it is on this folder for you to install

install arduino avr boards from arduino. (tools>board>boards manager) there should be a search box.

![[image after installment]](installthisboard.png)

then goto [this link tutorial](https://github.com/RalphBacon/LGT8F328P-Arduino-Clone-Chip-ATMega328P?tab=readme-ov-file#6-simple-steps-to-get-a-lgt8f328p-based-board-running-at-32mhz) and follow the *6 Simple Steps to get a LGT8F328P-based board running at 32MHz*

you have access to [this folder](https://github.com/7-5/boatman/tree/main/extra/serialtest) now you can run it. and thats how i got the serial working.

the template (i mean usual arduino code with necessary lines) is the projects base. i hope you could replicate.
