# 04_karasimsek
**Amaç:** Knight Rider (Karaşimşek) efekti – LED dizisini soldan sağa, sağdan sola taramak.

**Kart:** Deneyap Kart / Arduino Uno  
**Kütüphaneler:** Yok

**Örnek Bağlantılar (kendi devrene göre düzenle):**
| Bileşen | MCU Pin | Not |
|--------|---------|-----|
| LED0   | D2      | |
| LED1   | D3      | |
| LED2   | D4      | |
| LED3   | D5      | |
| LED4   | D6      | |
| LED5   | D7      | |
| LED6   | D8      | |
| LED7   | D9      | |

> Dirençleri (220–330Ω) LED’lere seri bağlamayı unutma.

## Devre
- Fritzing: `fritzing/04_karasimsek.fzz`  
*(İpucu: Fritzing’ten `breadboard.png` ve `schematic.png` dışa aktar ve bu klasöre ekle.)*

## Yükleme
1) Arduino IDE → Kart/Port ayarı  
2) `04_karasimsek.ino` yükle

## Notlar
- Hızı `delay()` süresi ile ayarlayabilirsin; pot ile hız kontrolü eklemek istiyorsan `analogRead` + `map` kullan.
- Ters dönüşte uç pinleri iki kez yakmamak için geri dönüş döngüsünü `n-2` → `1` aralığında tut.

