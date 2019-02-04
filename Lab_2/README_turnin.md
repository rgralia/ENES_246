# Voltage Controlled Buffers  
Why doesn't **Vivado** allow two switches to control one LED?  Because one switch could try to send "on" to the LED. The other switch could try to send "off" to the LED.  They would fight.  Ultimately something would burn up .. the Nexys4 DDR board would be damaged. 

This is solved by moving from two states of on or off to three states or "triState" which include states of on, off and don't care.  Don't care has many names including "open" and "high  impedance", and "infinite output impedance".



![1545961610045](1545961610045.png)



#### Port Diagram

![Lab2_1_port](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\Lab2_1_port.PNG)

#### Verilog Code

module vcb(
   input  sw0,
   input  sw1,
   output tri LED
   );
   bufif1 b1(LED, sw0, sw0);
   bufif1 b2(LED, sw1, sw1);
endmodule

#### RTL Schematic Screen shot

![lab2_1_RTL_schematic](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\lab2_1_RTL_schematic.PNG)

#### Synthesis Schematic Screen shot

![lab2_1_Synthesis_schematic](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\lab2_1_Synthesis_schematic.PNG)



#### Implementation Device screen shot zoomed in on something interesting  

![lab2_1_zoom](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\lab2_1_zoom.PNG)

#### Testing

Here is the above different from the two state situation from the first lab.  When sw0 is 0, the tristate buffer doesn't try to ground the LED. It outputs nothing. *What is the difference between 0 (false) and nothing .. don't care .. high input impedance... etc?* the two state solution would not allow two switches to drive one LED, the tri-state allows this to happen....sort of like an OR gate; if sw0 OR sw1 are closed, the LED will receive voltage.

*What happens when both switches are zero (false)? What could happen?* then the LED is OFF, the possibility is that external EMF could interfere with the LED operations.

*So what is the difference between 0 and off?*  a ZERO means off, and OFF means disconnect wire (remove all possibilities that the wire/circuit could be driven ON)

*What is the difference between 0 and 1?*  a ZERO means remove voltage from the wire, a ONE means send voltage down the wire.

*What does a designer have to worry about when working with tri-state?* external EMF interfering with the circuit operations

*What kind of gate (and, nand, or, nor, xor, xnor, not) is this circuit?* OR

*Zoom in on a pull down resistor*>>>in picture above, is the squiggly lines (resistor symbol)  just below and to the left of the orange "PAD".

## BeCreative!

Hook the switches to the LED's in some creative way of your choice using the concepts you learned in this lab.  Think about the circuits that cell phones are going to control in your home. Imagine all the remotes, all the physical wall switches, all the on off  buttons and dimmer buttons in all devices begin controlled by your cell phone. You are designing a circuit to be imbedded in all devices and walls. 

#### Port Diagram



#### ![lab2_2_port](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\lab2_2_port.PNG)

verilog code;

   module vcb(
   input  sw0,
   input  sw1,
   input sw2, 
   input sw3,
   input sw4,
   input sw5,
   input sw6,

   output tri LED0,
   output tri LED1
   );
   bufif1 b1(LED0, sw0, sw0);
   bufif1 b2(LED0, sw1, sw1);
   bufif1 b3(LED0, sw2, sw2);
   bufif1 b4(LED0, sw3, sw3);
   bufif1 b5(LED1, sw4, sw4);
   bufif1 b6(LED1, sw5, sw5);
   bufif1 b7(LED1, sw6, sw6);
endmodule



#### RTL Schematic Screen shot

![lab2_2_RTL_schematic](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\lab2_2_RTL_schematic.PNG)

#### Synthesis Schematic Screen shot

![lab2_2_RTL_schematic](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\lab2_2_RTL_schematic.PNG)

#### Implementation Device screen shot zoomed in on something interesting

![lab2_2_zoom](C:\Users\SET253-03U.HCCMAIN\Desktop\Lab_2\lab2_2_zoom.PNG)

#### Testing

hand tested, SUCCESS; first LED is controllable by the first 4 switches and the second LED is controllable by the next 3 switches. 

Many people are replacing light bulbs with LED's that last forever. Most are 12 volt DC.  They are being connected to AC through wall warts that waste energy. Some are running 12 volt systems in parallel with the AC. Some are using AC to switch the 12 volt. 

​	[wikipedia Multiway_Switching Traveler_system_2](https://en.wikipedia.org/wiki/Multiway_switching#Traveler_system_2)

There is a transition, a business opportunity, a standards opportunity here.  Compare the "3-way" and "4-way switches" at Home Depot or Lowes.  

*Can a voltage controlled buffer reduce the amount of copper needed?* if using DC, should take less copper, as DC should require thinner wires to carry the proper voltage and amperage as compared to AC.

