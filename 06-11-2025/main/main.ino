// Dodajemy do naszego programu potrzebne nam biblioteki
#include <SPI.h>
#include <MFRC522.h> // Biblioteka obsługująca czytnik RFID RC522

// Ustalamy, które piny są podłączone z modułem RFID:
#define SS_PIN 10 // Pin podłączony z pinem D10 Arduino
#define RST_PIN 5 // Pin RST podłączony z pinem D5 Arduino

// Tworzymy obiekt do obsługi czytnik RFID
MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600); // Uruchamiamy komunikację z komputerem (monitor portu szeregowego)
  SPI.begin(); // Uruchamiamy komunikację SPI
  rfid.PCD_Init(); // Tworzymy moduł RFID

  Serial.println("Przyłóż kartę RFID do czytnika....")
}

void loop() {
  // Sprawdzamy, czy przyłożono kartę do czujnika
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()){
    return; // Jesli nie, wracamy do początku naszej pętli
  }

  Serial.print("Wykryto kartę! ID: ")

}
