int in1 = 11; //Motor A 
int in2 = 10;   //Motor A 
int in3 = 9;     // Motor B
int in4 = 8;      //Motor B 
int enA = 6;    // pwm Motor A 
int enB = 5;  // pwm Motor B
void setup() {
  // put your setup code here, to run once:
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(enB,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(enA, 255);
  analogWrite(enB, 255);
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
delay(1000);
analogWrite(enA, 255);
analogWrite(enB, 255);
digitalWrite(in1,0);
digitalWrite(in2,1);
digitalWrite(in3,0);
digitalWrite(in4,1);
delay(1000);
}
/* analogWrite(enA, 255);       //for enable RM1
analogWrite(enB, 255);
digitalWrite(in1,0); // Motor right
digitalWrite(in2,0); // Motor right
digitalWrite(in3,1); // Motor left
digitalWrite(in4,0); // Motor left
delay(1000);
analogWrite(enA, 255);               //for LM 1
analogWrite(enB, 255);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);

delay(1000);
*/
//////////Right////////////////////////////////////////
/*digitalWrite(in1,LOW);/////Right motors
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);/////left motors////
digitalWrite(in4,LOW);*/
