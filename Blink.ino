const int RED = 9;
const int GREEN = 10;
const int BLUE = 11;
void setup() {
  // put your setup code here, to run once:
  for (int i=9;i<=11;i++)
    pinMode(i, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  show(random(0,255),random(0,255),random(0,255));
  delay(1000);
}

void show(int r,int g,int b){
  analogWrite(RED, r);
  analogWrite(GREEN, g);
  analogWrite(BLUE, b);
}

void off(){
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

