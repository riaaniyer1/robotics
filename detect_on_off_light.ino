
void setup() {
  // configure A0 as input
  pinMode(A0, INPUT);
  // start the serial monitor at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // read the analog value on pin A0
  int sensorValue = analogRead(A0);

  // if sensor is “pressed” (value above a threshold), show message
  if (sensorValue > 500) {  // adjust 500 depending on your sensor
    Serial.print("too much light - ");
  } else if (sensorValue < 100) 
  {
      // otherwise just show the sensor reading
      Serial.print("don't turn off the light-");
    }
  Serial.println(sensorValue);

  delay(1000);  // wait a little so the output is readable
}
