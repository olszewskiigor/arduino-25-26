int ledPin = 13;

void setup()
{
	pinMode(ledPin,OUTPUT);
}

void loop()
{
  // Migamy naszą diodą 3 razy
  for (int i=0; i<3; i++){
     digitalWrite(ledPin,HIGH);
  	 delay(500);
  	 digitalWrite(ledPin,LOW);
     delay(500);
  }
  // Robimy dodatkową przerwę
  delay(4000);
}