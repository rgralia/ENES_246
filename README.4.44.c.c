# Buffers and Voltage Controlled Buffers 
There are three folders containing three vivado projects.  In this lab and all other labs, you will be asked to demonstrate each circuit to an instructor, answer the questions (look up the answer online or make a hypothesis). Suggest you edit this readme file. 

## Buffers

#### Port Diagram



![buffers 2](buffers 2.png)

![Capture](Capture.PNG)

#### Verilog Code

module switchLED(
    input [15:0] SW,
    output [15:0] LED
    );
    assign LED = SW;
endmodule



#### RTL Schematic Screen shot



![port_diagram_switches](port_diagram_switches.PNG)![test](test.png)



#### Synthesis Schematic Screen shot

![buffers 3](buffers 3.png)



#### Implementation Device screen shot zoomed in on something interesting

#### Testing

![buffers 4](buffers 4.png)

*What is a net?*    a collection of wires, a bundle of wires. 
*What is a cell?*  a cell is an input.
*What is an IO port?*  IO port is an input output device 

*What do the yellow triangles labeled OBUF do?* an output buffer that increases voltage on the output path to the LED 
*What physically is a zero?*  physical zero is generally considered a ZERO voltage but can also be voltage that is below the threshold of actuation for a electronic devise.
*What logically is a zero?*  logical zero is; an open switch or a wire without voltage.
*What physically is a one?*  physical one is voltage being carried down a wire, a closed switch.
*What logically is a one?*  a logical one is  a closed switch or a wire with voltage. 

## MultipleLEDs  
#### Port Diagram

![buffers 5](-1Buffers/buffers 5.png)

#### Verilog Code

module switchLED(
    input SW,
    output [15:0] LED
    );
    assign LED[0] = SW;
    assign LED[1] = SW;
    assign LED[2] = SW;
    assign LED[3] = SW;
    assign LED[4] = SW;
    assign LED[5] = SW;
    assign LED[6] = SW;
    assign LED[7] = SW;
    assign LED[8] = SW;
    assign LED[9] = SW;
    assign LED[10] = SW;
    assign LED[11] = SW;
    assign LED[12] = SW;
    assign LED[13] = SW;
    assign LED[14] = SW;
    assign LED[15] = SW;

endmodule

#### RTL Schematic Screen shot

![buffers 6](-1Buffers/buffers 6.png)

#### Synthesis Schematic Screen shot

![buffers 7](-1Buffers/buffers 7.png)

![buffers 9](-1Buffers/buffers 9.png)

#### Implementation Device screen shot zoomed in on something interesting

#### Testing

Look at the verilog code and the constraints file.  
Make modifications so that one switch drives mutliple LED's.  
*How many LED's can one switch drive?*  16, can probably do ALL LEDs on the board. 

*If vivado fails, where does it fail (RTL. Synthesis, Implementation or Bit File Generation), what is the error message?  What does the error message mean in your own words?*

*Instead of 16 lines of verilog code, everything can be put in one line. What is this one line?*

## MultipleSwitches

This project or circuit fails. Two switches can not drive one LED.  Take screen shots until you reach an error message:

#### Port Diagram

#### Verilog Code

#### RTL Schematic Screen shot

#### Synthesis Schematic Screen shot

#### Implementation Device screen shot zoomed in on something interesting

#### Testing

*What are the vivado error messages?  Guess what each means in your own words.* 

*How do the net, cell, IO ports change?* 

*Does vivado fail during RTL Analysis, Synthesis, Implementation or Bit File Generation?* 

*What does the error message multi-driven net mean? What would you look for as an error in your circuit design? What is a multi-driven net?*

****

## BeCreative!

Hook the switches to the LED's in some creative way of your choice using the concepts you learned in this lab.

#### Port Diagram

#### Verilog Code

#### RTL Schematic Screen shot

#### Synthesis Schematic Screen shot

#### Implementation Device screen shot zoomed in on something interesting

#### Testing

