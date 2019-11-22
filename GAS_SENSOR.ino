int yellOWLed=12;
int greenLed=11;
int buzzer =10;
int smokeA0 = A5;
// your threshold value 
int sensorThres =5;

void setup() {

  pinMode(yellOWLed,OUTPUT);
    pinMode(greenLed,OUTPUT);
      pinMode(buzzer,OUTPUT);
        pinMode(smokeA0,OUTPUT);
        Serial.begin(9600);
        }
void loop() {
int analogSensor = analogRead(smokeA0);

Serial.print("Pin A0");
Serial.println(analogSensor);
// check if it has reached the threshold value 
if (analogSensor > sensorThres)
{

digitalWrite(yellOWLed, LOW);
digitalWrite(greenLed, HIGH);
noTone(buzzer);
}
delay(100);
}
  
