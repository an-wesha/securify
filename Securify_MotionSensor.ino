int ledPin = 13;                // LED 
int pirPin = 2;                 // PIR Out pin 
int pirState = 0;                   // PIR status
const int buzzer = 10;
void setup() {
 pinMode(ledPin, OUTPUT);     
 pinMode(pirPin, INPUT);     
 
}
void loop(){
 pirState = digitalRead(pirPin); 
 if (pirState == HIGH) {            // if motion detected
   digitalWrite(ledPin, HIGH);  // turn LED ON
   tone(buzzer, 440, 2000); //Buzzer goes off
 } 
 else {
   digitalWrite(ledPin, LOW); // turn LED OFF if we have no motion
 }
} 
