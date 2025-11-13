// Dodajemy do naszego programu potrzebne nam biblioteki
#include <SPI.h>
#include <MFRC522.h> // Biblioteka obsługująca czytnik RFID RC522

// Ustalamy, które piny są podłączone z modułem RFID:
#define SS_PIN 10 // Pin podłączony z pinem D10 Arduino
#define RST_PIN 5 // Pin RST podłączony z pinem D5 Arduino

void setup() {
  Serial.begin(9600); // Uruchamiamy komunikację z komputerem (monitor portu szeregowego)
  SPI.begin(); // Uruchamiamy komunikację SPI
}

void loop() {
  // put your main code here, to run repeatedly:

}
