int Led=13;//define LED port
int buttonpin=3; //define switch port
;int  val;//define digital variable val
void  setup()
{
pinMode(Led,OUTPUT);//define LED as a output port
pinMode(buttonpin,INPUT);//define switch as a output port
Serial.begin(9600);
}
void  loop()

{ val=digitalRead(buttonpin);
//read the value of the digital interface 3 assigned to val 
Serial.println(analogRead(0));

if(val==HIGH)//when the switch sensor have signal, LED blink
{
digitalWrite(Led,HIGH);
}
else
{
digitalWrite(Led,LOW);
}
}
