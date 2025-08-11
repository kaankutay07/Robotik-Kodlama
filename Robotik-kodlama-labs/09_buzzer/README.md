# 09_buzzer — İstiklal Marşı (melodi)
**Amaç:** Piezo/aktif buzzer ile nota frekanslarını kullanarak İstiklal Marşı'nı çalmak.

**Kart:** Deneyap / Arduino Uno
**Kütüphaneler:** Yok (yerleşik `tone()`/`noTone()` kullanılıyor)

**Bağlantı**
- Buzzer (+) → D7 (örnek), Buzzer (−) → GND
- Aktif buzzer kullanıyorsan: `tone()` tek frekansta ötüş üretir.
- Pasif piezo ise: `tone()` frekansı doğrudan sürer; daha temiz ses için seri ~100Ω ekleyebilirsin.

## Açıklama
- Kodda notalar Hz cinsinden tanımlı: `a=440`, `c=523`, ...  
- Melodi, `tone(buzzer, frekans)` + `delay(süre_ms)` adımlarıyla ilerler.  
- Durak/ara vermek için `noTone(buzzer)` kullanılır (veya sessiz `delay`).

## Notlar
- Deneyap/ESP32 3.3V çıkış verir; ses seviyesi düşükse harici sürücü (NPN + 5V) kullanılabilir.
- Ton üretimini dizi & süre tablolarıyla daha modüler hâle getirmek kolay bakım sağlar.
