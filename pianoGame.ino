int Speaker=10;
int Button1=2;


void setup() {
  // put your setup code here, to run once:
  pinMode(Speaker,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(Speaker, 1000);
  delay(1000);
  noTone(Speaker);
  delay(1000);

}
