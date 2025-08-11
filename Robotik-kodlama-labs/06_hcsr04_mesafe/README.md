# 06_hcsr04_mesafe
**Amaç:** HC-SR04 ultrasonik sensör ile mesafe ölçmek (cm).

**Kart:** Deneyap / Arduino Uno  
**Kütüphaneler:** Yok

**Bağlantılar (HC-SR04)**
| Pin | Bağlantı |
|-----|----------|
| VCC | 5V |
| Trig| D6 |
| Echo| D7 |
| GND | GND |

> Deneyap/ESP32 (3.3V lojik) kullanıyorsan **Echo** çıkışını bir **bölücü** ile 3.3V'a düşür (ör. 10k/15k). GND ortak olmalı.

## Devre
- Fritzing: `fritzing/06_hcsr04_mesafe.fzz`

## Yükleme
1) Arduino IDE → Kart/Port  
2) `06_hcsr04_mesafe.ino` yükle  
3) Seri Monitörü 9600 baud aç

## Notlar
- Zaman → mesafe dönüşümü: `mesafe_cm ≈ sure_us / 58` (veya `sure/29/2`), ses hızı ~343 m/s varsayımıyla.
- `pulseIn(pin, HIGH, timeout)` kullanarak takılmaları önleyebilirsin (ör. 25_000 µs ≈ 4.3 m).
