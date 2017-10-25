///Ayesha Khan 

//25/10/17


 /* SimpleToggle_PB_LED */

const byte LEDpin = 3;
const byte SWITCHpin = 2;


byte LEDstate = HIGH;
byte SWITCHstate;
byte lastSWITCHstate;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
}


void loop() {
   //put your main code here, to run repeatedly:
  
SWITCHstate = digitalRead(SWITCHpin);
 int time = millis(); ///Record time 

if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
{
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
 }


lastSWITCHstate = SWITCHstate;

//Find the difference between the time recorded and the current time to see how long it took
 int diff = millis() - time;
 
 /*
 //flash light to show how long
 for (int i=0; i <= diff; i++) {
  digitalWrite(LEDpin, HIGH);
  delay (1000);
  digitalWrite(LEDpin, LOW);
  delay(1000);
  }*/
}


