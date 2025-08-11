int sensorPin = 9;    // Sensorun takilacagi pin
int buzzerPin = 8;    // Buzzerin takilacagi pin
int veri;             // Sensorden okunan verinin tutulacagi degisken

void setup() {
  pinMode(sensorPin, INPUT);    // Sensorun takilacagi pini INPUT olarak ayarliyoruz.
  pinMode(buzzerPin, OUTPUT);   // Buzzerin takilacagi pini OUTPUT olarak ayarliyoruz.

}

void loop() {
  veri = digitalRead(sensorPin);    // Sensorden dijital okuma yapiyoruz.
  if(veri == true) {                // Sensor verisi esik degeri gecerse if icerisindeki kodlar uygulanir.
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else {                            // Sensor verisi esik degerinden kucuk olursa if icerisindeki kodlar uygulanir.
    digitalWrite(buzzerPin, LOW);
  }
}
