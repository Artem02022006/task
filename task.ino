#define LED_PIN  9
#define POT_PIN  A0
#define LED_PIN1 11

void setup(){
  pinMode(LED_PIN,OUTPUT);
  pinMode(POT_PIN,INPUT);
  pinMode(LED_PIN,OUTPUT);
}
void loop(){
  int rotation,brightness,rot1,brightness1;
  rotation=analogRead(POT_PIN);
  brightness=-rotation/4;
  analogWrite(LED_PIN,brightness);
  
  
  rot1=analogRead(POT_PIN);
  brightness1=-rot1/-4;
  
  analogWrite(LED_PIN1,brightness1);
}
