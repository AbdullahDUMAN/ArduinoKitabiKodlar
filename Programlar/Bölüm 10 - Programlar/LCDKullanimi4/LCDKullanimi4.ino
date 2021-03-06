/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 10 - LCD Kullanımı
 
LCD Ekran Kullanımı - Örnek 4

Arduino ile LCD ekran arasındaki bağlantılar
 * LCD RS     ==> digital-12
 * LCD Enable ==> digital-11
 * LCD D4     ==> digital-5
 * LCD D5     ==> digital-4
 * LCD D6     ==> digital-3
 * LCD D7     ==> digital-2
 * LCD R/W    ==> toprak (GND)
 * 10K potansiyometre 0-5V bağlantı:
 * orta ucu LCD'nin V0 pinine(pin 3)
****************************************************************/

// LCD kütüphanesini programımıza ekliyoruz:
  #include <LiquidCrystal.h>
//LCD bağlantılarımız ile bir LCD nesnesi oluşturuyoruz.
//lcd(RS,EN,D4,D5,D6,D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int bekleme = 3000;
void setup() {
  // LCD’nin ekran değerlerini vererek başlatıyoruz
  // 2 satır 16 karakter
  lcd.begin(16, 2);
  // LCD’ye mesaj yazdırıyoruz
  lcd.print("LCD EKRAN ");
  lcd.setCursor(0,1);
  lcd.print("AYARLARI");
}
void loop() {
   delay(bekleme);
// Ekranı temizle
   lcd.clear();
//imleci en başa al
   lcd.home();
   lcd.print("IMLEC - ACIK");
   lcd.cursor();
   delay(bekleme);
   lcd.clear();
   lcd.home();
   lcd.print("IMLEC - KAPALI");
   lcd.noCursor();
   delay(bekleme);

   lcd.clear();
   lcd.home();
   lcd.print("BLINK - ACIK");
   lcd.blink();
   delay(bekleme);

   lcd.clear();
   lcd.home();
   lcd.print("BLINK - KAPALI");
   lcd.noBlink();
   delay(bekleme);

   lcd.clear();
   lcd.home();
   lcd.print("EKRAN KAPANIYOR!");
   delay(bekleme);
   lcd.noDisplay();
   delay(bekleme);
   lcd.clear();
   lcd.home();
   lcd.display();
   lcd.print("EKRAN ACILDI!");
   delay(bekleme);
}


