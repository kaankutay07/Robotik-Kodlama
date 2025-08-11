int trigPin = 6;  // Sensorun trig pini Arduinonun 6 numarali ayagina baglandi.
int echoPin = 7;  // Sensorun echo pini Arduinonun 7 numarali ayagina baglandi.

long sure;
long uzaklik;

void setup() {
  pinMode(trigPin, OUTPUT); // trig pini cikis olarak ayarlandi.
  pinMode(echoPin, INPUT);  // echo pini giris olarak ayarlandi.
  Serial.begin(9600); // Seri haberlesme baslatildi.
}

void loop() {
  digitalWrite(trigPin, LOW);   // Sensor pasif hale getirildi.
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);  // Sensore ses dalgasinin uretmesi icin emir verildi.
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);   // Yeni dalgalarin uretilmemesi icin trig pini LOW konumuna getirildi.
  sure = pulseIn(echoPin, HIGH);  // Ses dalgasinin geri donmesi icin gecen sure olculuyor.
  uzaklik = sure /29.1/2; // Olculen sure uzakliga cevriliyor.
  if(uzaklik > 200) {
    uzaklik = 200;
  }
  Serial.print("Uzaklik ");
  Serial.print(uzaklik);  // Hesaplanan uzaklik bilgisayara aktariliyor.
  Serial.println(" CM olarak olculmustur.");
  delay(500);
}
