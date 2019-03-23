/* 
 Arduino Dice :)
 This example shows how to simulate throwing a dice with 6 LEDs
 By Esther van der Stappen
 */

// 6 consecutive digital pins for the LEDs
int first=13;
int second=12;
int third=11;
int fourth=10;
int fifth=9;
int sixth=8;

boolean jackpot=false;

int pace=300;

int scoreLED=5;

int looseLED=4;

int myLED[7]={13, 12, 11, 10, 9, 8, 6};

// pin for the button switch
int button=2; 
// value to check state of button switch
int pressed;

void blinklight(int LED, int pace ){
  digitalWrite(LED, HIGH);
  delay(pace);
  digitalWrite(LED, LOW);
  delay(pace);
}


void setup() {
  blinklight(2,800);
  // set all LED pins to OUTPUT
  for (int i = 0; i < 7; i++){
    pinMode(myLED[i], OUTPUT);
  }
  
  // set buttin pin to INPUT
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);
  pinMode(scoreLED, OUTPUT);

  // initialize random seed by noise from analog pin 0 (should be unconnected)
  randomSeed(analogRead(0));

  attachInterrupt( 0 , interrupt , FALLING );
}

void loop() {
  // if button is pressed - throw the dice
  pressed = digitalRead(button);

//  if (pressed == LOW) {
    // remove previous number to LOW
    for (int i = 0; i < 7; i++){
      digitalWrite(myLED[i], LOW);
      
    }
    
   
    //write IF statements to light up the lights
    digitalWrite(first, HIGH);
//Going Up and turning LEDs on
    for(int i = 0; i < 7; i++){
        if(i == 3){
          jackpot=true;
        }
        blinklight(myLED[i],pace );
        if(i == 3){
          jackpot=false;
        }
              
    }
 //Going down and turning LEDs on  
    for(int i = 6; i >= 0; i--){
        if (i == 3){
          jackpot=true;
        }

        blinklight(myLED[i],pace);
        if (i == 3){
          jackpot=false;
        }
        
    }
    
      
//  } 
}


void interrupt(){
// delayMicroseconds(20000);
 //IF button not Pressed exit function

 //else increase speed and if midLED is on
  //incrament score, else  you lost
  if (jackpot){
    digitalWrite(scoreLED, HIGH);
    digitalWrite(looseLED, LOW);
    pace=pace-50;
  } else {
    digitalWrite(scoreLED, LOW);
    digitalWrite(looseLED, HIGH);
  }


}



