# REQUIREMENTS
## INTRODUCTION
In today’s world, LPG is used everywhere. In our home, in hotels & restaurants, in cars & buses, in industries. And then there are chances that the LPG leakage would happen. This can cause major accidents causing life threat. As we know, precaution is better than cure, so it is better to implement any system which would detect this LPG gas leakage and intimate user around it.
# SWOT ANALYSIS
## STRENGTH
- ATmega328P is a high performance yet low power consumption 8-bit AVR microcontroller.
- That’s able to achieve the most single clock cycle execution of 131 powerful instructions thanks to its advanced RISC architecture.
- It can commonly be found as a processor in Arduino boards such as Arduino Fio and Arduino Uno.
## WEAKNESS
- Processors are simpler to use, with the usage of 8bit and 16bit instead of 32/64bit which are more complex.
- Readily usable without additional computing components with 32k bytes of onboard self-programmable flash program memory as well as 23 programmable I/O lines Code Efficient.
- All 31 registers are directly connected to the arithmetic logic unit (ALU), making it 10 times faster than conventional CISC microcontrollers
Optimized for AVR enhanced RISC instruction set.
## OPPORTUNITY
- ATmega328P is a low-power CMOS 8-bit microcontroller based on the AVR enhanced RISC architecture. The ATmega328P achieves throughputs approaching 1MIPS per MHz By executing powerful instructions in a single clock cycle. This allows system designers to optimize power consumption versus processing speed very easily. ATMega328p is one of the famous MCUs of Atmel because of its use in the Arduino UNO board. ATmega328P is designed with low current consumption features. The chip contains 32 kilobytes of internal flash memory, 1KB of EEPROM, and 2KB of SRAM.
## THREAT
- High up-front costs
- Performance standardization has not yet been streamlined.
# 4W & 1H
What - When gas is detected in air

Where - Used in almost where gas is leaked

When - When gas is leaked

Why - To maintain safer envirionment

How - By using sensors and switches
# DETAIL REQUREMENT

## High Level Requirements

| ID | Description |
| ------------- | ------------- |
| `HLR1`  | Microcontroller unit  |
| `HLR2` | Switches |
| `HLR3`  | Temperature sensor  |
| `HLR4`  | Lcd |
## Low Level Requirements
| ID | Description | HLR ID|
| ------------- | ------------- |------------- |
| `HLR1`  | ATMega328  |`HLR1`|
| `HLR2`  | ADCand Potentiometer |`HLR3` |
| `HLR3`  | LCD and LED, PWM |`HLR4`|

