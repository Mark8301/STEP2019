int Speaker=10;
int Button1=2;
int Button2=3;
int Button3=4;
int Button4=5;
int Button5=6;
int RecButton=11;
int PlayButton=12;
int Presed1=HIGH;
int Presed2=HIGH;
int Presed3=HIGH;
int Presed4=HIGH;
int Presed5=HIGH;
int PresedRec=HIGH;
int PresedPlay=HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(Speaker,OUTPUT);
  pinMode(Button1, INPUT);
  digitalWrite(Button1, HIGH);
  pinMode(Button2, INPUT);
  digitalWrite(Button2, HIGH);
    pinMode(Button3, INPUT);
  digitalWrite(Button3, HIGH);
    pinMode(Button4, INPUT);
  digitalWrite(Button4, HIGH);
    pinMode(Button5, INPUT);
  digitalWrite(Button5, HIGH);
  pinMode(RecButton, INPUT);
  digitalWrite(RecButton, HIGH);
  pinMode(PlayButton, INPUT);
  digitalWrite(PlayButton, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
//  tone(Speaker, 1000);
//  delay(1000);
//  noTone(Speaker);
//  delay(1000);
//  tone(Speaker, 500);
//  delay(1000);
//  noTone(Speaker);
//  delay(1000);


 Presed1 = digitalRead(Button1);
 Presed2 = digitalRead(Button2);
 Presed3 = digitalRead(Button3);
 Presed4 = digitalRead(Button4);
 Presed5 = digitalRead(Button5);

 if (Presed1 == LOW){
  tone(Speaker, 1000);
 } else if (Presed2 == LOW){
  tone(Speaker, 750); 
 } else if (Presed3 == LOW){
  tone(Speaker, 500); 
 } else if (Presed4 == LOW){
  tone(Speaker, 250); 
 } else if (Presed5 == LOW){
  tone(Speaker, 100); 
 }else {
  noTone(Speaker);
 }


  


  














  
  

}
