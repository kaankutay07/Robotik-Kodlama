#define led 3 // 3.pinde LED oldugunu tanimliyoruz.

void setup() {
  pinMode(led, OUTPUT); // LED'in cikis elemani oldugunu belirtiyoruz.
  Serial.begin(9600);   // 9600 Baundluk bir seri haberlesme baslatiyoruz.
}

void loop() {
  int isik = analogRead(A0);  // Isik degiskenini A0 pinindeki LDR ile okuyoruz.
  Serial.println(isik);   // Okunan degeri seri iletisim ekranina yansitiyoruz.
  delay(50);

  if(isik > 900) {  // Okunan isik degeri 900'den buyuk ise
    digitalWrite(led, LOW); // LED yanmasin.
  }

  if(isik < 850) {  // Okunan isik degeri 850'den kucuk ise
    digitalWrite(led, HIGH);  // LED yansin.
  }
}
