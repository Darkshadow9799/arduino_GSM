# arduino_GSM
The set of operation code is placed in the void setup (). Each time when the Arduino is powered ON’s an SMS will send, as the void setup function only run once. Or Resetting the Arduino board (press the reset switch on the Arduino board) also sends a message.

In the AT commands,

AT+CMGF=1\r,  put the modem in SMS text format mode.

AT+CMGS=\”+ZZ XXXXXXXXXX\”\r, The SMS will send to the 10 digit  number written as XXXXXXXXXX with 2 digit country code ZZ.


 
Here the TEXT is “Hello world”, replace it with the TEXT need to be sent.

0x1A, it is the hexadecimal of the decimal character code 26, which is  Substituted (SUB) symbol in ASCII control characters.

Send SMS using push switch
In this device whenever the switch is pressed, a text message (text in the code) will send to the number specified in the code. When the pushbutton is pressed, the Arduino sends the AT commands to the GSM module, for a text SMS; the GSM module works with the “AT commands”.
