# Robotik Kodlama Labs

Her proje Arduino kodu, Fritzing dosyaları ve kısa dokümantasyondan oluşur.

## Proje Listesi
| No | Proje Adı | Konu | Klasör |
|---:|-----------|------|--------|
| 01 | Blink | Dijital çıkış & `delay()` | [`Robotik-kodlama-labs/projects/01_blink/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/projects/01_blink) |
| 02 | RGB LED | PWM ile renk karışımı | [`Robotik-kodlama-labs/02_rgb_led/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/02_rgb_led) |
| 03 | Buton + LED | `digitalRead` / `INPUT_PULLUP` | [`Robotik-kodlama-labs/03_button_led/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/03_button_led) |
| 04 | Karaşimşek | Dizi LED tarama | [`Robotik-kodlama-labs/04_karasimsek/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/04_karasimsek) |
| 05 | LM35 Sıcaklık | ADC → Voltaj → °C | [`Robotik-kodlama-labs/05_lm35_sicaklik/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/05_lm35_sicaklik) |
| 06 | HC-SR04 Mesafe | `pulseIn` ile süre→mesafe | [`Robotik-kodlama-labs/06_hcsr04_mesafe/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/06_hcsr04_mesafe) |
| 07 | PIR Hareket | Dijital sensör ile algılama | [`Robotik-kodlama-labs/07_pir_hareket/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/07_pir_hareket) |
| 08 | LDR Işık | ADC & histerezis | [`Robotik-kodlama-labs/08_ldr_isik/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/08_ldr_isik) |
| 09 | Buzzer Melodi | `tone()` / `noTone()` | [`Robotik-kodlama-labs/09_buzzer/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/09_buzzer) |
| 10 | Toprak Nem + Buzzer | FC-28 D0 ile uyarı | [`Robotik-kodlama-labs/10_toprak_nem/`](https://github.com/kaankutay07/Robotik-Kodlama/tree/main/Robotik-kodlama-labs/10_toprak_nem) |

## Kullanım
1. İlgili klasöre gir → `*.ino` dosyasını Arduino IDE ile aç.  
2. Gerekli kart/port ayarlarını yap → **Upload**.  
3. Fritzing klasöründe şema: `fritzing/*.fzz` (görsel istersen PNG/SVG dışa aktar).

## Notlar
- Kart: Deneyap / Arduino Uno (projeye göre).  
- LM35 & LDR projelerinde ADC çözünürlüğü/kart referansına göre sabitleri güncelle.
- HC-SR04 ve FC-28 için lojik seviyelerine dikkat (ESP32/Deneyap: 3.3V).
