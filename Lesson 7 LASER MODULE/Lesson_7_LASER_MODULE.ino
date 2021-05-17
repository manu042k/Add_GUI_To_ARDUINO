void  setup()
{
pinMode(13, OUTPUT);  //define 13 pin as output
}


void  loop() {
digitalWrite(13, HIGH);   // open laser
delay(1000);  // delay 1s
digitalWrite(13, LOW);  // close laser
delay(1000);  // delay 1s
}

