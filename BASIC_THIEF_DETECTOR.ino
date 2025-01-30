int a = 19;
int b = 23;
int c = 4;
int d = 2;
int e = 17;
int f = 16;
int g = 15;


void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(32,INPUT);
  }


void loop() {
  
  int value=analogRead(32);
  Serial.println(value);
  if (value==1){
    //A
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(500);

    //L
    digitalWrite(a,0);
    digitalWrite(b,0);
    digitalWrite(c,0);
    digitalWrite(d,0);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(500);

    //E
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(500);

    //r
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,0);
    digitalWrite(d,0);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(500);

    //t
    digitalWrite(a,0);
    digitalWrite(b,0);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(500);
    }
  else{
    digitalWrite(a,0);
    digitalWrite(b,0);
    digitalWrite(c,0);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    }
    delay(500);

}
