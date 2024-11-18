int SININE = 6;  // pean ühendama vastava viigu vooluahelas
int PUNANE = 5;

int SININE_valgustatud = 500;
int SININE_kustunud = 1000;

int PUNANE_valgustatud = 1000;
int PUNANE_kustunud = 500;

/////////
void setup() {
pinMode (SININE, OUTPUT);
pinMode (PUNANE, OUTPUT);
}
////////
void loop(){
for (int PP=1; PP<=3; PP=PP+1){
digitalWrite (SININE, HIGH);
delay(SININE_valgustatud);
digitalWrite(SININE, LOW);
delay(SININE_kustunud);
}

for (int KK=1; KK<=5; KK=KK+1){
digitalWrite (PUNANE, HIGH);
delay(PUNANE_valgustatud);
digitalWrite(PUNANE, LOW);
delay(PUNANE_kustunud);
}
}
