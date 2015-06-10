// Pill a day - reminder to take my pills every day

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 7;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // open the serial port at 9600 bps:
  Serial.begin(9600);
  Serial.print("Start...");         
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = digitalRead(sensorPin);  
  // ##test
  Serial.print(sensorValue);
  Serial.print("\n");
  
  if (sensorValue == 1){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
}
