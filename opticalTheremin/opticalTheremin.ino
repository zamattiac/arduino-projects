int light = A4;
int buzzer = 3;
int lightReading;
int calibration;

void setup() {
  pinMode(light, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  calibration = 1023 - analogRead(light);
  for (int i=0; i < 20; i++) {
    Serial.println(calibration);
  }
}

void loop() {
  lightReading = analogRead(light);
  int calibratedReading = toneFromReading(lightReading);
  Serial.println(lightReading);
  Serial.println(calibratedReading);
  tone(buzzer, calibratedReading, 1000);
}

int toneFromReading(int reading) {
  return reading + calibration;
}

