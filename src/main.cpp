#include <Arduino.h>

void setup() {   
  // Wait for console
  Serial.begin(115200);
  while (!Serial);

  Serial2.begin(19200);                  // Connect to the Murata module through the Serial2 port at 19200

  pinMode(LORA_BOOT0, OUTPUT);
  digitalWrite(LORA_BOOT0, LOW);
  pinMode(LORA_RESET, OUTPUT);
  digitalWrite(LORA_RESET, HIGH);
  delay(200);
  digitalWrite(LORA_RESET, LOW);
  delay(200);
  digitalWrite(LORA_RESET, HIGH);

  Serial.println("Enter AT commands to talk to the Murata module...");
}

void loop() {
	if ( Serial.available() != 0 ) {
		while ( Serial.available() > 0 ) {
			char c = Serial.read();
                if ( c == '\n' ) c = '\r';
		Serial2.print( c );						
		Serial.print( c );						
		if ( c == '\r' )
			Serial.println("");
		}
	}

	if ( Serial2.available() != 0 ) {
		while ( Serial2.available() > 0 ) {
			char c = Serial2.read();
			Serial.print( c );						
			if ( c == '\r' )
				Serial.println("");
		}
	}
}