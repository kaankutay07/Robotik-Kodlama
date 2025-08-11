int ledPin = 13;      // LED icin pini seciyoruz.
int inputPin = 8;     // Giris pinini secim yapıyoruz (PIR sensoru icin).
int pirState = LOW;   // Hareket algilanmadigini varsayarak basliyoruz.
int val = 0;          // Pin durumunu okumak icin degisken atiyoruz.

void setup() {
  pinMode(ledPin, OUTPUT);    // LED'i cikis olarak yaziyoruz.
  pinMode(inputPin, INPUT);   // Sensoru giris olarak yaziyoruz.
  Serial.begin(9600);         // Seri portu aciyoruz.
}

void loop() {
  val = digitalRead(inputPin);  // Giris degerini okumasi icin yaziyoruz.

  if (val == HIGH) { // Girisin HIGH olup olmadigini kontrol ediyoruz.
    digitalWrite(ledPin, HIGH); // Hareket var ise LED'i acik.

    if (pirState == LOW) {
      Serial.println("Hareket Algilandi!"); // Hareket var, Hareket Algilandi! yaz.
      pirState = HIGH;
    }
  }
  else {
    digitalWrite(ledPin, LOW);  // Hareket yok ise LED'i kapali.

    if (pirState == HIGH) {
      Serial.println("Hareket Yok!"); // Hareket var, Hareket Yok! yaz.
      pirState = LOW;
    }
  }
}
