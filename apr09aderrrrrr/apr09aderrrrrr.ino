int sensorPin = 0;

int ledred1 = 13; //red
int ledblue1 = 12; //blue
int ledgreen1 = 11; //green

int ledred2 = 10; //red
int ledblue2 = 9; //blue
int ledgreen2 = 8; //green

int ledred3 = 7; //red
int ledblue3 = 6; //blue
int ledgreen3 = 5; //green

int sensoValue = 0;
int Value_new;
void setup()
{
  pinMode(ledred1,OUTPUT);
  pinMode(ledred2,OUTPUT);
  pinMode(ledred3,OUTPUT);
  
  pinMode(ledblue1,OUTPUT);
  pinMode(ledblue2,OUTPUT);
  pinMode(ledblue3,OUTPUT);
  
  pinMode(ledgreen1,OUTPUT);
  pinMode(ledgreen2,OUTPUT);
  pinMode(ledgreen3,OUTPUT);
}

void red()
{
  digitalWrite(ledred1, HIGH);
  digitalWrite(ledred2, HIGH);
  digitalWrite(ledred3, HIGH);
  delay(100);
  digitalWrite(ledred1, LOW);
  digitalWrite(ledred2, LOW);
  digitalWrite(ledred3, LOW);
  delay(100);
}

void blue()
{
  digitalWrite(ledblue1, HIGH);
  digitalWrite(ledblue2, HIGH);
  digitalWrite(ledblue3, HIGH);
  delay(200);
  digitalWrite(ledblue1, LOW);
  digitalWrite(ledblue2, LOW);
  digitalWrite(ledblue3, LOW);
  delay(200);
}


void green()
{
  digitalWrite(ledgreen1, HIGH);
  digitalWrite(ledgreen2, HIGH);
  digitalWrite(ledgreen3, HIGH);
  delay(100);
  digitalWrite(ledgreen1, LOW);
  digitalWrite(ledgreen2, LOW);
  digitalWrite(ledgreen3, LOW);
  delay(200);
}

void loop()
{
  Value_new = analogRead(sensorPin);
  
  Value_new = map(Value_new, 0, 1023,1,4);
  if(Value_new==2)
  {
    red();
  }
  else if(Value_new==3)
  {
    blue();
  }
  else if(Value_new==4)
  {
    green();
  }
  else
  {
    digitalWrite(ledred1, LOW);
    digitalWrite(ledred2, LOW);
    digitalWrite(ledred3, LOW);
    
    digitalWrite(ledblue1, LOW);
    digitalWrite(ledblue2, LOW);
    digitalWrite(ledblue3, LOW);
    
    digitalWrite(ledgreen1, LOW);
    digitalWrite(ledgreen2, LOW);
    digitalWrite(ledgreen3, LOW);
    
  }
  
}
