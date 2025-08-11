# 10_toprak_nem — FC‑28 + Buzzer (dijital eşik ile uyarı)
**Amaç:** Toprak nem sensörünün **D0 (dijital)** çıkışını izleyip eşik aşıldığında buzzer ile uyarı vermek.

**Kart:** Deneyap / Arduino Uno  
**Kütüphaneler:** Yok

**Bağlantılar**
- FC‑28 modül: **VCC, GND, D0** (eşik pot'u ile ayarlanır). Bu örnekte D0 → **D9**.  
- Buzzer: **D8** → buzzer (+), buzzer (−) → GND.
- Not: Deneyap/ESP32 3.3V seviyelidir; modül 3.3–5V çalışır fakat D0 seviyesini kartına göre kontrol et.

## Çalışma
Koddaki akış:
1) `pinMode(sensorPin, INPUT);` – D9 giriş
2) `veri = digitalRead(sensorPin);` – D0 **HIGH/LOW** okuma
3) Eğer **HIGH** ise buzzer 100ms aralıkla **bip** yapar; LOW ise buzzer **kapalı** kalır.

> Analog hassasiyet istersen FC‑28'in **A0** pinini `analogRead(Ax)` ile kullanıp nem eşiğini yazılımdan belirleyebilirsin.

## Devre
- Fritzing: `fritzing/10_toprak_nem.fzz`
