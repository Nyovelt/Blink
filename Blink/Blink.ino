const int RED = 8;
const int GREEN = 9;
const int BLUE = 10;
void setup() {
  // put your setup code here, to run once:
  for (int i=8;i<=10;i++)
    pinMode(i, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void show(int r.int g,int b){
    analogWrite(RED, r);
    analogWrite(GREEN, g);
    analogWrite(BLUE, b);
}

