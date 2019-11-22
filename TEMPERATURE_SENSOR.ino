const int temp_pin=A0;


void setup() {
  Serial.begin(9600);
}

void loop() {
float Voltage;
float temp_c;

Voltage=analogRead(temp_pin)*5.0/1023;
temp_c=100.0*Voltage-50;
Serial.print("Voltage: ");
Serial.print(Voltage);
Serial.print(" degC: ");
Serial.println(temp_c);
delay(500);
  
  // put your main code here, to run repeatedly:

}
