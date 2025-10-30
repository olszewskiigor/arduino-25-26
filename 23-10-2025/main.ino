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
  	Serial.begin(9600);
}

void loop()
{
	// Czyszczenie sygnału
  	digitalWrite(TRIG,LOW); // Ustawiamy TRIG w stan niski
  	delayMicroseconds(2); // Czekamy 2 mikrosekundy
    // Wysyłamy krótki impuls wyzwalający
  	digitalWrite(TRIG,HIGH); // Ustawiamy TRIG w stan wysoki
}