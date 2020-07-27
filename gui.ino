char serialdata;
int pin = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0)
{
  serialdata= Serial.read();
  if(serialdata=='1')
  {
    digitalWrite(13,HIGH);
  
  }
  if(serialdata == '0')
  {
    digitalWrite(13,0);
  }
  }
}
