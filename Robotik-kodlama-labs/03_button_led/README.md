# 03_button_led
**Amaç:** Buton girişi ile LED kontrolü; `digitalRead`, dahili `INPUT_PULLUP`, basit mantık.

**Kart:** Deneyap Kart / Arduino Uno  
**Kütüphaneler:** Yok

**Örnek Bağlantılar (kendi devrene göre düzenle):**
| Bileşen | MCU Pin | Not |
|--------|---------|-----|
| Buton  | D2      | `INPUT_PULLUP` ile kullanılırsa GND'ye basar |
| LED    | D13     | Dahili LED çoğu kartta mevcut |

## Devre
- Fritzing: `fritzing/03_button_led.fzz`  
*(İpucu: Fritzing’ten `breadboard.png` ve `schematic.png` dışa aktar ve bu klasöre ekle.)*

## Yükleme
1) Arduino IDE → Kart/Port ayarı  
2) `03_button_led.ino` yükle

## Notlar
- `INPUT_PULLUP` kullanıyorsan buton **basıldığında LOW** okursun (mantık ters döner).
- Titreme (debounce) gerekiyorsa `delay(20)` veya yazılımsal debounce ekleyebilirsin.
