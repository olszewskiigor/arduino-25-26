#define TRIG 9 // Pin wyzwalający Trigger
#define ECHO 10 // Pin odbiorczy Echo

int ledPin = 13;
int dystans;
long czas;

void setup()
{
	pinMode(ledPin,OUTPUT);
  	pinMode(TRIG,OUTPUT);
    pinMode(ECHO,INPUT);
  
  	// Uruchomienie komunikacji szeregowej
  	Serial.begin(9600)
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