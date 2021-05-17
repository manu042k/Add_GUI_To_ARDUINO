int Led=13;//define LED port
int SENSOR=3;//define hall magetic sensor port
int val;//define Digital variable val
void  setup()
{
pinMode(Led,OUTPUT);//define LED as output port
 
pinMode(SENSOR,INPUT);//define hall magetic sensor as output port
Serial.begin(9600);
}
void  loop()
{
val=digitalRead(SENSOR);//read the value of the digital interface 3 assigned to val
Serial.print(val);
Serial.println();
if(val=HIGH)//When vibration sensor detection signal, LED light
{
digitalWrite(Led, HIGH);
}
{
digitalWrite(Led, LOW);
}
}
