void setup() {
  // Arduino calistiginda :

  pinMode(13, OUTPUT);
  // 13. pini cikis olarak tanimliyoruz.

}

void loop() {
  // Adruino calistigi surece :

  digitalWrite(13, HIGH);
  // 13. pine elektrik gonder.

  delay(1000);
  // 1 saniye bekle.

  digitalWrite(13, LOW);
  // 13. pine giden elektriği kes.

  delay(1000);
  // 1 saniye bekle.

}
