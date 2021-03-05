
float tempC;
float tempF;
int pinLM35 = 0; 
 
void setup() {
  
  Serial.begin(9600);
 
}
 
void loop() {
  
  tempF = analogRead(pinLM35); 
   
  tempC = (tempF-32)*.5556;
 
  Serial.print(tempC);

  Serial.print("\n");
  delay(1000);
}
