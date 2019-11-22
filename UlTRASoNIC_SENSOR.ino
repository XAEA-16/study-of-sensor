#define trigpin 10 
#define echopin 13


void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin, INPUT);

}

void loop() {
float duration,distance;
digitalWrite(trigpin,LOW);
delayMicroseconds(2);

digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

duration = pulseIn(echopin,HIGH);
distance = (duration / 2) * 0.0344;


if (distance >=400 || distance <=2){
  Serial.print("Distance=");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
delay(500);
}
