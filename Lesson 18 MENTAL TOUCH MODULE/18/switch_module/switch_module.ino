int Led=13;//define LED port
int buttonpin=3; //define touch port
;int  val;//define digital variable val
void  setup()
{
pinMode(Led,OUTPUT);//define LED as a output port
pinMode(buttonpin,INPUT);//define touch module as a output port
}
void  loop()

{ val=digitalRead(buttonpin);//read the value of the digital interface 3 assigned to val 
if(val==HIGH)//when the touch module have signal, LED blink
{
digitalWrite(Led,HIGH);
}
else
{
digitalWrite(Led,LOW);
}
}


