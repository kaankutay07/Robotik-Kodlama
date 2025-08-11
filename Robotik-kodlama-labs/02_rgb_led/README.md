# 02_rgb_led
**Amaç:** RGB LED’i PWM ile sürmek; renk karışımı mantığını öğrenmek.  
**Kart:** Deneyap Kart / Arduino Uno  
**Kütüphaneler:** Yok

**Bağlantılar (Pinout) – kendi devrene göre güncelle:**
| Bileşen | MCU Pin | Not |
|--------|---------|-----|
| R (kırmızı) | D9 (PWM)  | |
| G (yeşil)   | D10 (PWM) | |
| B (mavi)    | D11 (PWM) | |
| Ortak bacak | GND veya VCC | LED tipine göre (common cathode/anode) uygun yönlendirme |

## Devre
- Fritzing: `fritzing/02_rgb_led.fzz`  
*(İpucu: Fritzing’ten `breadboard.png` ve `schematic.png` dışa aktar ve buraya ekle.)*

## Yükleme
1) Arduino IDE → Kart/Port ayarı  
2) `02_rgb_led.ino` yükle

## Notlar
- PWM pinlerini kartına göre seç. Deneyap/Uno’da PWM işaretli pinleri kullan.
- Ortak anot LED kullanıyorsan analogWrite değerlerini terslemen gerekebilir.
