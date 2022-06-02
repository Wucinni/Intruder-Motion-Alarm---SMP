long int t1, t2, t; 
char armed = '0';
int ON = 1;
int goOFF = 0;
int started_one = 0, started_two = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT); 
}
void loop() {
  int motion = digitalRead(A0);

  if(armed == '1')      {LED1(255, 0, 255);  SecondLED(255, 255, 255);  if (motion) {goOFF = 1;}}
  if(armed == '0')      {LED1(255, 255, 255);  SecondLED(0, 255, 255); goOFF = 0;}
  
  if(armed == '1'){
    if(goOFF == 1){
        if(ON == 1) {LED1(255, 255, 0 ); SecondLED(255, 255, 255); noTone(3);}
        if(ON == 1 && started_one == 0) {started_one = 1; t = millis(); Serial.println("Now in led1");}
        if(ON == 1 && started_one == 1){
            t1 = millis();
            if(t1 - t >= 1000){
              ON = 0;
              started_one = 0;
            }
          }
        if(ON == 0) {LED1(255, 255, 255);SecondLED(0, 255, 255); tone(3, 1000);}
        if(ON == 0 && started_two == 0) {started_two = 1; t = millis(); Serial.println("LEDDSD2");}
        if(ON == 0 && started_two == 1){
            t2 = millis();
            if(t2 - t >= 1000){
              ON = 1;
              started_two = 0;
            }
          }
      }
  }
  else  {noTone(3);}
  if(Serial.available() > 0)  {armed = Serial.read();}     
  delay(20);         
}

void LED1(int r1, int g1, int b1)
 {
  analogWrite(11, b1);
  analogWrite(13, r1);
  analogWrite(12, g1);
}

void SecondLED(int r2, int g2, int b2)
 {
  analogWrite(8, b2);
  analogWrite(10, r2);
  analogWrite(9, g2);
}
