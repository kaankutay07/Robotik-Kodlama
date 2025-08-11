int red_light_pin = 11;
int green_light_pin = 10;
int blue_light_pin = 9;
// Pimleri tanimliyoruz.
void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  // Kart uzerinde bulunan pinleri cikis olarak tanimliyoruz.
}

void loop() {
  RGB_color(255, 0, 0); // kirmizi
  delay(1000);
  RGB_color(0, 255, 0); // yesil
  delay(1000);
  RGB_color(0, 0, 255); // mavi
  delay(1000);
  RGB_color(255, 255, 125); // acik sari
  delay(1000);
  RGB_color(0, 255, 255); // su yesili
  delay(1000);
  RGB_color(255, 0, 255); // mor
  delay(1000);
  RGB_color(255, 255, 0); // sari
  delay(1000);
  RGB_color(255, 255, 255); // beyaz
  delay(1000);

}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
  // Renklerin parlakligini ayarliyoruz.
}