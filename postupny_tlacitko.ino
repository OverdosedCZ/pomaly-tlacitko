int  buttonState = 0;
int const  buttonPress = 2;
int t1 = 1000;
int cislo = 0;

void setup() {
  pinMode(4,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,LOW);
  
}
  

void loop() {

  buttonState =  digitalRead(buttonPress);
  if (buttonState == LOW){

    Spusteni();
  }
  else if (buttonState == HIGH){

    
  }

  
}


  void Spusteni() {  
 cislo++;

 if (cislo == 1){
  
  digitalWrite(8,1); 
  digitalWrite(4,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
  digitalWrite(13,0);
  delay(t1);
 }
 else if (cislo == 2){
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(12,0);
  digitalWrite(13,0);
  delay(t1);
 }
 else if (cislo == 3){
  digitalWrite(4,1);
  digitalWrite(8,1);
  digitalWrite(13,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
  delay(t1);
  }
  else if (cislo == 4){
  digitalWrite(4,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(13,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(12,0);
  delay(t1);
  }
  else if (cislo == 5){
  digitalWrite(4,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(13,1);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(12,0);
  delay(t1);
  }
  else if (cislo == 6){
  digitalWrite(4,1);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
  digitalWrite(12,1);
  digitalWrite(13,1);
  delay(t1);
  }
  else if (cislo > 6){
    cislo = 0;
  
 }
 }


