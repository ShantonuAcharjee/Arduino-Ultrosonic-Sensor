int trigPinA =A0;
int echoPinA =A1;
long durationA;
int distanceA;

int LED =13;

void setup() {
  Serial.begin(9600);
  pinMode(trigPinA,OUTPUT);
  pinMode(echoPinA,INPUT);
  pinMode(LED,OUTPUT);
}



void loop() {
   digitalWrite(trigPinA,LOW);
   delayMicroseconds(2);

   digitalWrite(trigPinA,HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPinA,LOW);

   durationA=pulseIn(echoPinA,HIGH);
  
   distanceA = durationA*0.034/2;
   Serial.print("distanceA:");
   Serial.println("distanceA");
if(distanceA==9){
      digitalWrite(LED,HIGH);
      delay(500);
 }

      
else
      digitalWrite(13,LOW);
    
}
