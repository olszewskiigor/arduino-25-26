#define TRIG 9 // Pin wyzwalający Trigger
#define ECHO 10 // Pin odbiorczy Echo

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  
  // Uruchomienie komunikacji szeregowej
  Serial.begin(9600);
}

void loop() {
  // Wysłanie impulsu
  digitalWrite(TRIG, LOW); delayMicroseconds(2);
  digitalWrite(TRIG, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // Pomiar echa z limitem czasu (30 ms)
  long czas = pulseIn(ECHO, HIGH, 30000); // 0 jeśli brak echa

  // Jeśli nic nie odebrano w limicie czasu
  if (czas == 0) {
    Serial.println("Brak odczytu");
    delay(500);
    return;
  }

  // Przeliczamy na cm
  int dystans = czas / 58;

  // Odfiltrowujemy nienaturalne wartości
  if (dystans < 2 || dystans > 300) {
    Serial.println("Poza zakresem");
  } else {
    Serial.print("Dystans: ");
    Serial.print(dystans);
    Serial.println(" cm");
  }

  delay(500);
}
