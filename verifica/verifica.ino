int ledgreen = 5;
int ledwhite = 7;
int ledyellow = 11;
int ledred = 13;
int tempo = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(ledgreen,OUTPUT);
pinMode(ledwhite,OUTPUT);
pinMode(ledyellow,OUTPUT);
pinMode(ledred,OUTPUT);
Serial.begin(9600);
Serial.print("Inserisci durata dei led");
while(Serial.available() == 0){
}
tempo = Serial.readString().toInt();
}
void ledrossoacceso(){
  digitalWrite(ledred,HIGH);
  digitalWrite(ledyellow,LOW);
  digitalWrite(ledwhite,LOW);
  digitalWrite(ledgreen,LOW);
  delay(tempo);
}
void ledgialloacceso(){
  digitalWrite(ledyellow,HIGH);
  digitalWrite(ledred,LOW);
  digitalWrite(ledwhite,LOW);
  digitalWrite(ledgreen,LOW);
  delay(tempo);
}
void ledbiancoacceso(){
  digitalWrite(ledwhite,HIGH);
  digitalWrite(ledred,LOW);
  digitalWrite(ledyellow,LOW);
  digitalWrite(ledgreen,LOW);
  delay(tempo);
}
void ledverdeacceso(){
  digitalWrite(ledgreen,HIGH);
  digitalWrite(ledred,LOW);
  digitalWrite(ledyellow,LOW);
  digitalWrite(ledwhite,LOW);
  delay(tempo);
}

void loop() {
  // put your main code here, to run repeatedly:
ledrossoacceso();
ledgialloacceso();
ledbiancoacceso();
ledverdeacceso();
  
}
