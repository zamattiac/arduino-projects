int button = 2;
int led = 13;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(button);
  Serial.println(state);
  if (state == 1) {
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
}
