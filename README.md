# Emebedded Systems Programming
This involves all the work that I have done in the domain of programming embedded systems using Arduino Uno microcontroller.

# LED & Buzzer Interfacing
* ESDI1.1: Flash/toggle/on off single LED.
* ESDI1.2: Flash/toggle/on off eigESDI LEDs.
* ESDI1.3: Interface 8 LEDs. Out of Four LED ON and Four LED OFF.
* ESDI1.4: Alternate ON OFF eigESDI LED.
* ESDI1.5: Interface 8 LEDs. Generate left series patterns.
* ESDI1.6: Interface 8 LEDs. Generate rigESDI series patterns.
* ESDI1.7: Interface 8 LEDs. Generate left and rigESDI series patterns.
* ESDI1.8: Combine all above in single program
* ESDI1.9: Display 00 to FF on LED
* ESDI1.10: Sound the buzzer every 1 second.

# Seven Segment Interfacing
* ESDI2.1: Display 0 to 9 on segment
* ESDI2.2: Display 00 to 99 on segment
* ESDI2.3: Display 000 to 999on segment
* ESDI2.4: Display 0000 to 9999 on segment
* ESDI2.5: Multiplexed 4 7-segment & do following:
    * IfSW1 press, display 0 to 9
    * If SW2 press, display 00 to 99
    * If SW3 press, display 000 to 999
    * If SW4 press, display 0000 to 9999
* ESDI2.6: Display the clock(MM : SS) on segment
* ESDI2.7: Display the clock(HH : MM) on segment
* ESDI2.8: Display the clock(HH : MM:SS) on segment
* ESDI2.9: Set the time using four switch and display the clock on segment
    * SW1 : when press, increment 1 digit
    * SW2 : when press, decrement 1 digit
    * SW3 : when press, display set time
    * SW4 : when press, start the clock
    
# Serial Communication
* ESDI3.1 Transmit “Hello World!” serially and display on monitor
* ESDI3.2 Receive the data between 0 to 9 serially and display on LED
* ESDI3.3 Transmit and receive the data in serially
* ESDI3.4 Interface switch and to following:
    * SW1 : when press, transmit “Good Morning ”
    * SW1 : when open, transmit “Bad Morning ”
* ESDI3.5 Receive data between 0 t0 9 and display on segment

# LCD Interfacing
* ESDI4.1 Display 0 to 9 on LCD
* ESDI4.2 Display 00 to 99 on LCD
* ESDI4.3 Display 000 to 999 on LCD
* ESDI4.4 Display 0000 to 9999 on LCD
* ESDI4.5 Display the string on LCDEx.; “Hello World”
* ESDI4.6 Interface 4 push button & do following:
    * SW1 : when press, display 0 to 9
    * SW2 : when press, display 00 to 99
    * SW3 : when press, display 000 to 999
    * SW4 : when press, display 0000 to 9999
* ESDI4.7 Display the clock(HH : MM : SS) on LCD
* ESDI4.8 Set the time using four switch and display the clock on LCD
* SW1 : when press, increment 1 digit
* SW2 : when press, decrement 1 digit
* SW3 : when press, display set time and start the clock
* SW4 : when press, reset the clock
* ESDI4.9 Receive serially data 0 t0 9 and display on LCD
* ESDI4.10 Display animation using the custom character on LCD
* ESDI4.11 Display the string on LCD using 4 pin Ex: “Hello World”
* ESDI4.12 Read data from LCD and display on serial port(monitor)
* ESDI4.13 Receive string from monitor (serial port) and also transmit again and display on LCD

# Keypad Interfacing
* ESDI5.1 Press any key from 4*4 keypad and display on lcd.
* ESDI5.2 Press any key from keypad and display on segment.
* ESDI5.3 Assume one password is stored in system. Enter password using keypad and check whether is correct or wrong and display status on LCD.
* ESDI5.4 Set password in system. Enter password using keypad and check whether is correct or wrong and display status on LCD.
* ESDI5.5 Set password in system also confirm it. Enter password using keypad and check whether is correct or wrong and display status on LCD. Give maximum three trial if three attempts wrong password then sound the buzzer.
* ESDI5.6 Interface button for set functionality when user press this button set password in system also confirm it otherwise enter password using keypad and check whether is correct or wrong and display status on LCD. Give maximum three trial if three attempts wrong password then sound the buzzer.

# ADC Interfacing
* ESDI6.1 Using Trim Pot of 5K set the voltage range between 0 V to 5V. Monitor value of voltage & transmit it serially.
* ESDI6.2 Using Trim Pot of 5K set the voltage range between 0 V to 5V. Monitor value of voltage &Display on LCD.
* ESDI6.3 Monitor the temperature using LM35 temperature sensor and display on LED
* ESDI6.4 Monitor the temperature using LM35 temperature sensor and display on 7- segment
* ESDI6.5 Monitor the temperature using LM35 temperature sensor and display on LCD.
* ESDI6.6 LigESDI fall on LDR and display value on lcd.
    * if value < 50,device off serially print and buzzer off
    * if value > 50,device on serially print and buzzer on

# Relay Interfacing
* ESDI8.1 Led flash using Relay.
* ESDI8.2 Monitor temperature using LM35 and display on lcd
    * if temperature > 20,device on and buzzer on
    * if temperature < 20,device off and buzzer off
* ESDI8.3 Monitor temperature using LM35 and display on 7-segment
    * if temperature > 20,device on and buzzer on
    * if temperature < 20,device off and buzzer off

# DC Motor Interfacing
* ESDI9.1 Rotate motor clockwise and anticlockwise for 1second.
* ESDI9.2 Rotate motor clockwise and anticlockwise using switch
    * If SW open, rotate clockwise
    * If SW close, rotate anticlockwise
* ESDI9.3 Enter password and password display on lcd
    * If password rigESDI then door open(motor rot lockwise) otherwise close

# PWM
* ESDI10.1 Using PWM control the brigESDIness of LED.
* ESDI10.2 Using PWM control the speed of DC motor.
* ESDI10.3 Interface three push button. If
    * SW1 pressed, rotate motor with full speed.
    * SW2 pressed, rotate motor with 1/2 speed.
    * SW3 pressed, rotate motor with 1/3 speed.
