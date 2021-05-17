int buzzer=8;//Set digital IO foot control buzzer
void setup()
{
pinMode(buzzer,OUTPUT);//Set up the digital IO foot mode, the OUTPUT for output
}
void loop()
{
unsigned char i,j;//define variable
while(1)
{
for(i=0;i<80;i++)//output a voice of one frequency
{ digitalWrite(buzzer,HIGH);//have voice 
delay(1);//delay 1ms 
digitalWrite(buzzer,LOW);//do not have voice 
delay(1);//delay 1ms
 

}
for(i=0;i<100;i++)//output a voice of another frequency
{ digitalWrite(buzzer,HIGH);//have voice 
delay(2);//delay 2ms 
digitalWrite(buzzer,LOW);//without voice 
delay(2);//delay 2ms
}
}
}

