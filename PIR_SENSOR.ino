int pirPin=7; //digital 7 
int buzzerPin = 6; //digital 6



void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
}

void loop() {
int pirVal = digitalRead(pirPin);
Serial.println(pirVal);
if(pirVal ==HIGH)
{
  // was motion detected
  Serial.println(" Motion Detected");
  digitalWrite(buzzerPin,HIGH);
  delay(10);
}
else {
  digitalWrite(buzzerPin, LOW);
}

  
}
