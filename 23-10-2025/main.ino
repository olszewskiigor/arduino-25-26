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
    delayMicroseconds(10); // Czekamy 10 mikrosekund
  
    // Mierzymy, jak długo pin ECHO pozostaje w stanie wysokim
    czas = pulseIn(ECHO,HIGH);
  
    // Przeliczamy czas na odległość w cm
    dystans = czas/58;
  
  	Serial.print("Dystans: "); // Wypisujemy teskt "Dystans: "
  	Serial.print(dystans); // Wypisujemy wartość zmiennej dystans
  	Serial.println(" cm"); // Wypisujemy jednostkę i robimy nową linię
  
  	delay(500); // Czekamy 0,5s przed kolejnym pomiarem
  	
}