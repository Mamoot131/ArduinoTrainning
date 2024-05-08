
int ledPin = 10; // define digital pin 10
void setup() {
pinMode(ledPin, OUTPUT);// define pin with LED connected as output.
} 

void loop() {
digitalWrite(ledPin, HIGH); 
delay(100);
digitalWrite(ledPin, LOW);
delay(100);
 }