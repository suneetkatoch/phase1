int sensorPin = A0;

int sensorValue = 0;
void setup()
{
  pinMode(4,INPUT);
  Serial.begin(9600);
}
void loop()
{
  sensorValue = analogRead(sensorPin);
  if(digitalRead(4)==HIGH)
  {
    Serial.println(sensorValue);
    delay(1000);
  }
} 