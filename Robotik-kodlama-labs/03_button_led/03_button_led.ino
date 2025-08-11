#define Buton 8
#define Led 10

int buton_durumu = 0; // Pini tanimliyoruz.

void setup() {  // Bu fonksiyon karta elektrik verdigimizde sadece bir sefer calisir.
  pinMode(Buton, INPUT);  // Arduino karti uzerinde bulunan pinleri cikis veya giris olarak tanimlayabiliriz. Buton giris olarak tanimladik.
  pinMode(Led, OUTPUT); // Arduino karti uzerinde bulunan pinleri cikis veya giris olarak tanimlayabiliriz. Led cikis olarak tanimladik.

}

void loop() { // Fonksiyonun bir sefer calismasi ardindan devamli calisan kisimdir.
  buton_durumu = digitalRead(Buton);  // Dijital giris olaak tanimlanan bir pin uzerindeki degeri okur ve bir sonuc dondurur (butona basildiginda).

  if(buton_durumu == 1)
  digitalWrite(Led, HIGH);  // Dijital bir pin cikis olarak ayarlandiginda ayarlanan pine LOW veya HIGH yazmak icin kullanılır.
  digitalWrite(Led, LOW);   // Dijital bir pin cikis olarak ayarlandiginda ayarlanan pine LOW veya HIGH yazmak icin kullanılır.

}
