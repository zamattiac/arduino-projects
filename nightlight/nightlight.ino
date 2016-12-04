int photo = 0;
int led = 13;
int luminosity = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(photo, INPUT);

  for (int x=0; x<10; x++){
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(100-2*x);
  }
  delay(100);
}

void loop () {
  luminosity = analogRead(photo);

  if (luminosity > 700) {
    digitalWrite(led,HIGH);
    Serial.println("Intruder detected.");
  }

}

