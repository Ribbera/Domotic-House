
int status = 0;
int buttonState = 0;

int buttonPushCounter = 0;

void setup(){
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop(){
buttonState = digitalRead(2);
    if (buttonState == HIGH) {
      buttonPushCounter += 1;
    } 
  if(status == 1){
  
     if(buttonPushCounter > 500){
	       status = 0;
  
  }
  
    
  }else{
    buttonState = digitalRead(2);
    if (buttonState == HIGH) {
      buttonPushCounter += 1;
		digitalWrite(3, HIGH);
      status = 1;
      
    } 
 
    if(status == 0){
    digitalWrite(3, LOW);
    
    }
    
  }
  
    delay(5); 

 


}
 
  
