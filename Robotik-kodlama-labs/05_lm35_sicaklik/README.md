# 05_lm35_sicaklik
**Amaç:** LM35 sıcaklık sensöründen analog değer okuyup voltaja, ardından sıcaklığa (°C) çevirmek.

**Kart:** Deneyap / Arduino Uno  
**Kütüphaneler:** Yok

**Bağlantılar (LM35)**
| Pin | Bağlantı |
|-----|----------|
| Vcc | 5V (Uno) / 3.3V (Deneyap) |
| Vout| A0 |
| GND | GND |

## Devre
- Fritzing: `fritzing/05_lm35_sicaklik.fzz`

## Yükleme
1) Arduino IDE → Kart/Port ayarı  
2) `05_lm35_sicaklik.ino` yükle  
3) Seri Monitörü 9600 baud aç

## Notlar
- LM35 çıkışı 10 mV/°C. ADC'yi voltaja çevirirken kartının ADC çözünürlüğü ve referansına göre sabiti güncelle (Uno: 5V/1023, Deneyap/ESP32: 3.3V/4095).
- Daha stabil ölçüm için birkaç okumanın ortalamasını alabilirsin.
