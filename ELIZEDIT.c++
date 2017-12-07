///Imported from my (Ayesha) repository

///Elizabeth Tabatchnik edited from Ayesha's code

//11/22/2017

//lights take turns blinking

 /* SimpleToggle_PB_LED */

const byte LEDpin = 3;
const byte SWITCHpin = 2;


byte LEDstate = HIGH;
byte SWITCHstate;
byte lastSWITCHstate;

void setup() {
  // put your setup code here, to run once:
   pinMode(13, OUTPUT);
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
}


void loop() {
   //put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  
SWITCHstate = digitalRead(SWITCHpin);
 int time = millis(); ///Record time 

if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
{
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
 }


lastSWITCHstate = SWITCHstate;


 

 //flash light to show how long
 for (int i=0; i <= diff; i++) {
  digitalWrite(LEDpin, HIGH);
  delay (200);
  digitalWrite(LEDpin, LOW);
  delay(200);
 }
 
  //Find the difference between the time recorded and the current time to see how long it took
   int diff = millis() - time;
}
