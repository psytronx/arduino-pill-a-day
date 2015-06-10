// Pill a day - reminder to take my pills every day

const unsigned long DELAY_MS = 12*3600000;
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 7;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
  Serial.print("Start...");         
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  
  // LED on by default
  digitalWrite(ledPin, HIGH);
  
}

void loop() {
  // read the value from the sensor:
  sensorValue = digitalRead(sensorPin);  
  // ##test
  Serial.print(sensorValue);
  Serial.print("\n");
  
  if (sensorValue == 1){
    digitalWrite(ledPin, LOW);
    waitAndTurnOnLed();
  }
  
}

void waitAndTurnOnLed() {
  unsigned long i;
  noInterrupts();
  for (i = 0; i < DELAY_MS; i++){
    delayMicroseconds(1000);
  }
  digitalWrite(ledPin, HIGH);
  interrupts();
}
