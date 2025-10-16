int ledPin = 13;

void setup()
{
	pinMode(ledPin,OUTPUT);
}

void loop()
{
  for (int t = 1000; t > 100; t= t-50){
     digitalWrite(ledPin,HIGH);
  	 delay(t);
  	 digitalWrite(ledPin,LOW);
     delay(t);
  }
  // Robimy dodatkową przerwę
  delay(4000);
}