int ledler[] = {2,3,4,5,6,7}; // Degiskenleri belirttigimiz bir dizi tanimliyoruz.

void setup() {
  for(int i=0; i<6; i++) {  // for dongusununu 6 tekrar
    pinMode(ledler[i], OUTPUT); // i degiskeni = cikis
  }
}

void loop() {
  for(int i=0; i<6; i++) {
    digitalWrite(ledler[i], HIGH);
    delay(100);
    digitalWrite(ledler[i], LOW); // Ilk ledden besinci lede kadar sirasiyla yaniyor. Yani dongude ilk led yanar, soner ve ikinci led yanar. Ikıncı led sondugunde ise ucuncu led yanar ve dongu bu sekilde devam eder.
  }
  for(int j=5; j>-1; j--) {
    digitalWrite(ledler[j], HIGH);
    delay(100);
    digitalWrite(ledler[j], LOW);
  }
}
