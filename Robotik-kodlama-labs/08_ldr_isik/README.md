# 08_ldr_isik
**Amaç:** LDR ile ışık seviyesini ölçmek ve eşiğe göre LED kontrolü/seri çıktı.

**Kart:** Deneyap / Arduino Uno  
**Kütüphaneler:** Yok

**Bağlantı (voltaj bölücü)**
- LDR ve 10kΩ seri, birleşim noktası **A0**.
- Diğer uçlar: LDR → VCC, direnç → GND (veya tersi; eşik yönü değişir).
- LED → D3 + 220–330Ω seri.

## Devre
- Fritzing: `fritzing/08_ldr_isik.fzz`

## Yükleme
1) Arduino IDE → Kart/Port  
2) `08_ldr_isik.ino` yükle  
3) Seri Monitör 9600 baud

## Notlar
- UNO: 0–1023, ESP32: 0–4095 aralığı.
- Titremeyi önlemek için **histerezis** (ör. üst 900, alt 850).
- Başlangıçta ortam ışığını ölçüp dinamik referans almak faydalı olabilir.

