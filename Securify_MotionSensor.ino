int ledPin = 13;                // LED (optional)
int pirPin = 2;                 // PIR Out pin 
int pirState = 0;                   // PIR status
const int buzzer = 10;            //buzzer pin

void setup() {
 pinMode(ledPin, OUTPUT);     
 pinMode(pirPin, INPUT);     
}

void loop(){
 pirState = digitalRead(pirPin); 
 if (pirState == HIGH) 
 {            
  // if motion detected
   digitalWrite(ledPin, HIGH);  // turn LED ON indicating movement detected
   tone(buzzer, 440, 2000);  //440 = frequency, 2000 duration in ms
  //Buzzer goes off
 } 
 else {
   digitalWrite(ledPin, LOW); // keep LED OFF if we have no motion
 }
} 
