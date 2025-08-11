# 07_pir_hareket
**Amaç:** PIR (HC-SR501 vb.) ile hareket algılama ve LED/seri çıktı.

**Kart:** Deneyap / Arduino Uno  
**Kütüphaneler:** Yok

**Bağlantılar (PIR modül)**
| Pin | Bağlantı |
|-----|----------|
| VCC | 5V (Uno) / 5V veya 3.3V (modüle göre) |
| OUT | D2 (örnek) |
| GND | GND |

> İlk açılışta sensör ısınır (~30–60 sn). OUT tipik olarak aktif HIGH'tır.

## Devre
- Fritzing: `fritzing/07_pir_hareket.fzz`

## Yükleme
1) Arduino IDE → Kart/Port  
2) `07_pir_hareket.ino` yükle  
3) Seri Monitörü 9600 baud aç

## Notlar
- Duyarlılık ve tetik süresi modül üzerindeki potlarla ayarlanır.
- Gürültü için durum değişimlerini (LOW→HIGH, HIGH→LOW) takip etmek faydalıdır.

