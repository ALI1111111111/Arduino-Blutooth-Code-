
const int ledPin = LED_BUILTIN; // Built in LED in Arduino board
//const int pin1 = 12;
//const int pin2 = 11;
//const int pin3 = 10;
//const int pin4 = 9;

const int pin1 = D1;
const int pin2 = D2;
const int pin3 = D3;
const int pin4 = D4;
String msg,cmd;

void setup() {
  // Initialization
  pinMode(pin1, OUTPUT);
   pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
     pinMode(pin4, OUTPUT);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  Serial.begin(9600); // Communication rate of the Bluetooth Module
  msg = "";
}

void loop() {
  
 BtSer();

}
void BtSer(){
   // To read message received from other Bluetooth Device
  if (Serial.available() > 0){ // Check if there is data coming
    msg = Serial.readString(); // Read the message as String
    Serial.println("Android Command: " + msg);
  }

  // Control LED in Arduino board
 if (msg == "<pin1on>"){
   digitalWrite(pin1, HIGH); // Turn on LED
   Serial.println("pin1 is turned on\n"); // Then send status message to Android
   msg = ""; // reset command
 } else if (msg == "<pin1off>") {
   
     digitalWrite(pin1, LOW); // Turn off LED
     Serial.println("pin1 is turned off\n"); // Then send status message to Android
     msg = ""; // reset command
   
 }
 else if (msg == "<pin2on>") {
   
     digitalWrite(pin2, HIGH); // Turn on LED
     Serial.println("pin2 is turned off\n"); // Then send status message to Android
     msg = ""; // reset command
   
 }else if (msg == "<pin2off>") {
   
     digitalWrite(pin2, LOW); // Turn off LED
     Serial.println("pin2 is turned off\n"); // Then send status message to Android
     msg = ""; // reset command
   
 }else if (msg == "<pin3on>") {
   
     digitalWrite(pin3, HIGH); // Turn on LED
     Serial.println("pin3 is turned on\n"); // Then send status message to Android
     msg = ""; // reset command
   
 }else if (msg == "<pin3off>") {
   
     digitalWrite(pin3, LOW); // Turn off LED
     Serial.println("pin3 is turned off\n"); // Then send status message to Android
     msg = ""; // reset command
   
 }
 else if (msg == "<pin4on>") {
   
     digitalWrite(pin4, HIGH); // Turn on LED
     Serial.println("pin4 is turned on\n"); // Then send status message to Android
     msg = ""; // reset command
   
 }else if (msg == "<pin4off>") {
   
     digitalWrite(pin4, LOW); // Turn off LED
     Serial.println("pin4 is turned off\n"); // Then send status message to Android
     msg = ""; // reset command
   
 }

  }
