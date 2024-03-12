int redPin = 13;
int yellowPin = 12;
int greenPin = 11;
int bluePin = 10;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(yellowPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(redPin, HIGH); 
  delay(1000);
  digitalWrite(redPin, LOW); 
  delay(1000);   
  digitalWrite(yellowPin, HIGH);   
  delay(1000);    
  digitalWrite(yellowPin, LOW);   
  delay(1000);    
  digitalWrite(greenPin, HIGH);  
  delay(1000);    
  digitalWrite(greenPin, LOW);  
  delay(1000);    
  digitalWrite(bluePin, HIGH);   
  delay(1000);    
  digitalWrite(bluePin, LOW); 
  delay(1000);    
}
