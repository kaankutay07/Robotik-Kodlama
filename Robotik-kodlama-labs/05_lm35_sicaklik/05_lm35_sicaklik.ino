// LM35 sicaklik sensoru derece basina 10 mV cikis verir.
// 1000 mV = 1 V

const int analogPin = A0;
float gerilimDeger = 0;
float sensorDeger = 0;
float sicaklikDeger = 0;

void setup() {
  // Seri port ekranini 9600 baund degerinde baslatiyoruz.
  Serial.begin(9600);
}

void loop() {
  // analogRead() fonksiyonu ile A0 pinindeki degeri okuyoruz.
  sensorDeger = analogRead(analogPin);

  Serial.print("Sensor Degeri: ");
  Serial.println(sensorDeger);

  // A0 pininden okunan degeri mV cinsinden gerilim degerine donusturuyoruz.
  gerilimDeger = (sensorDeger/1023)*5000;

  Serial.print("Gerilim Degeri: ");
  Serial.println(gerilimDeger);

  // Gerilim degerini sicaklik degerine donusturuyoruz.
  sicaklikDeger = gerilimDeger/10.0;

  Serial.print("Sicaklik Degeri: ");
  Serial.println(sicaklikDeger);

  Serial.println("***********");
  // Her dongude bir saniye bekliyoruz.
  delay(1000);

}
