void setup()
{
  //Set Exact Baud rate of the GSM/GPRS Module.
  Serial.begin(9600);  
  Serial.print("\r");
  delay(1000);                  
  Serial.print("AT+CMGF=1\r");    
  delay(1000);
  /*Replace XXXXXXXXXX to 10 digit mobile number &  ZZ to 2 digit country code*/
  Serial.print("AT+CMGS=\"+ZZXXXXXXXXXX\"\r");    
  delay(1000);
  //The text of the message to be sent.
  Serial.print("HELLO WORLD");   
  delay(1000);
  Serial.write(0x1A);
  delay(1000); 
}
void loop()
{
}
