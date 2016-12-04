int reading = 0;
int buzzer = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(13, OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(2);
  Serial.println(reading);
  if (reading > 10) {
    digitalWrite(13,HIGH);
    tone(buzzer,196,100);
    delay(100);
  }

  else {
    digitalWrite(13,LOW);
    noTone(buzzer);
  }
}
