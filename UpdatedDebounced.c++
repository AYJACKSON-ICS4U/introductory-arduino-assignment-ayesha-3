///Ayesha Khan Copied from my own repo


/* SimpleToggle_PB_LED  AYESHA KHAN*/

const byte LEDpin = 3;
const byte SWITCHpin = 2;


byte LEDstate = HIGH;
byte SWITCHstate;
byte lastSWITCHstate;
byte dbstate;
byte lastdbstate;



void setup() {
// put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
}


void loop() {
SWITCHstate = digitalRead(SWITCHpin);
//put your main code here, to run repeatedly:

if (SWITCHstate != lastSWITCHstate)
{
int time = millis(); ///Record time  
}

int t = millis() - time;
if (t > 20)
{
  dbstate = SWITCHstate;
}

if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
{
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
 }


lastSWITCHstate = SWITCHstate;

//Find the difference between the time recorded and the current time to see how long it took


 
 
}

