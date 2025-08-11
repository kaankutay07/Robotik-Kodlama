# 01_blink
**Amaç:** Temel dijital çıkış ve `delay()` kullanımı (LED yak-söndür).  
**Kart:** Deneyap Kart (veya Arduino Uno)  
**Kütüphaneler:** Yok  

**Bağlantılar (Pinout):**
| Bileşen | MCU Pin | Not |
|--------|---------|-----|
| LED    | D13     | Dahili LED (birçok kartta mevcut) |

## Devre
Fritzing dosyası: `fritzing/01_blink.fzz`  
(İpucu: Fritzing'ten `breadboard.png` ve `schematic.png` dışa aktar ve bu klasöre ekle.)

## Yükleme
1. Arduino IDE → Kart/Port ayarı  
2. Gerekli kütüphaneler (yok)  
3. `01_blink.ino` dosyasını yükle

## Demo
`assets/` klasörüne kısa bir GIF/foto ekleyebilirsin.

## Sorun Giderme
- LED yanmıyorsa kart üzerindeki dahili LED pinini kontrol et (bazı kartlarda `LED_BUILTIN` makrosu).

## Notlar
- Öğrenilenler: `pinMode`, `digitalWrite`, `delay`
