// ---------------------------------------------------------------- //
// ID OF USER: Rakeshtsg
// INTERFACE: Arduino with Soil Moisture Sensor Digital Mode
// Using Arduino IDE 
// Using with arduino
// Tested on N/A
//VCC-VCC
//GND-GND
//int msvalue = 0; // moisture sensor value 
//int led = 13; 
// ---------------------------------------------------------------- //



void setup() {
  Serial.begin(9600);
  pinMode(msensor, INPUT);
  pinMode(led, OUTPUT);  
}

void loop() {
  msvalue = analogRead(msensor);
  Serial.println(msvalue);
  
  if ( (msvalue >= 500  ) && ( flag == false ) )
{
  digitalWrite(led, HIGH); 
  flag = true; 
  delay(1000); 
}

  if ( (msvalue <= 300  ) && ( flag == true ) )
{
  digitalWrite(led, LOW); 
  flag = false; 
  delay(1000); 
}

  delay(1000);      
}
