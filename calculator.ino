#include <LiquidCrystal.h>

bool add_B = false;
bool sub_B = false;
bool multiply_B = false;
bool divide_B = false;
bool cosine_B = false;
bool sine_B = false;
bool factorial_B = false;
bool readInputX_B = true;
bool readInputY_B = false;
bool negativeP = false;
float inputX;
float inputY;
float answer;
int nextNum = 0;
float const e = 2.7183;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
  Serial.println(sine(90));
}

void loop() {
  float sensorValue0 = analogRead(A0);
  float sensorValue1 = analogRead(A1);
  float sensorValue2 = analogRead(A2);
  float sensorValue3 = analogRead(A3);

  if(sensorValue0 > 480 && sensorValue0 < 520){ //PI
    if(readInputX_B){
      inputX *= PI;
      lcd.print(inputX);
    }
    if(readInputY_B){
      inputY *= PI;
      lcd.print(inputY);
    }
    
  }
  
  if(sensorValue0 > 650 && sensorValue0 < 690){ //e
    if(readInputX_B){
      inputX *= e;
      lcd.print(inputX);
    }
    if(readInputY_B){
      inputY *= e;
      lcd.print(inputY);
    }
  }
  
  if(sensorValue0 > 990 && sensorValue0 < 1030){ //7
    
    if(readInputX_B){
      inputX += power(7,nextNum);
      lcd.print(inputX);
    }
    if(readInputY_B){
      inputY += power(7,nextNum);
      lcd.print(inputY);
    }
    nextNum++;
    
  }

if(sensorValue0 > 30 && sensorValue0 < 60){ //8
    
    if(readInputX_B){
      inputX += power(8,nextNum);
      lcd.print(inputX);
    }
    if(readInputY_B){
      inputY += power(8,nextNum);
      lcd.print(inputY);
    }
    nextNum++;
    
  }

  if(sensorValue0 > 710 && sensorValue0 < 760){ //9
    
    if(readInputX_B){
      inputX += power(9,nextNum);
      lcd.print(inputX);
    }
    if(readInputY_B){
      inputY += power(9,nextNum);
      lcd.print(inputY);
    }
    nextNum++;
    
  }

  if(sensorValue0 > 770 && sensorValue0 < 830){ //+

    readInputX_B = false;
    readInputY_B = true;
    lcd.clear();
    
  }
  if(sensorValue1 > 710 && sensorValue1 < 760){ //sine
    
    if(readInputX_B){
      inputX += power(9,nextNum);
      lcd.print(inputX);
    }
    if(readInputY_B){
      inputY += power(9,nextNum);
      lcd.print(inputY);
    }
    nextNum++;
    
  }
  



  
}





float readInputX(){
  while(readInputX_B = true){
    
  }
}

float readInputY(){
  
}


float add(float x, float y){

  answer = x + y;
  return answer;
}

float multiply(float x, float y){

  answer = x * y;
  return answer;
}

float subtract(float x, float y){

  answer = x + y;
  return answer;
}

float divide(float x, float y){

  answer = x / y;
  return answer;
}

float factorial(int factorialBase){

  while(factorialBase > 0){
  answer*= factorialBase;
  factorialBase--;
  }

  return answer;
}

float power(float base, float power){

  if(power = 0){
    answer = 1;
  }
  
  if( power < 0){
    power *=-1;
    negativeP = true;
  }
  
  while(power > 0){
    answer *= base;
    power--;
  }
  
  if(negativeP){
    answer = 1 / answer; 
  }
  return answer;
}

float sine(float x){
  
answer = sin(x);

  return answer;
}

float cosine(float x){
  answer = cos(x); 
  return answer;
}

float squareRoot(float x){
  answer = sqrt(x);
  return answer;
}

float currentInput(){
  if(readInputX_B)
    return inputX;
  if(readInputY_B)
    return inputY;
}






