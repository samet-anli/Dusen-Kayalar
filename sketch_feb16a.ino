#define ROW_1 2
#define ROW_2 3
#define ROW_3 4
#define ROW_4 5
#define ROW_5 6
#define ROW_6 7
#define ROW_7 8
#define ROW_8 9
#define COL_1 10
#define COL_2 11
#define COL_3 12
#define COL_4 13
#define COL_5 A0
#define COL_6 A1
#define COL_7 A2
#define COL_8 A3

const byte rows[] = {
    ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};
// (1 = ON, 0 = OFF)

byte TODOS[] = {B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};
byte EX[] = {B00000000,B00010000,B00010000,B00010000,B00010000,B00000000,B00010000,B00000000};
byte A[] = {B00000000,B00011000,B00100100,B00100100,B00111100,B00100100,B00100100,B00000000};
byte B[] = {B01111000,B01001000,B01001000,B01110000,B01001000,B01000100,B01000100,B01111100};
byte C[] = {B00000000,B00011110,B00100000,B01000000,B01000000,B01000000,B00100000,B00011110};
byte D[] = {B00000000,B00111000,B00100100,B00100010,B00100010,B00100100,B00111000,B00000000};
byte E[] = {B00000000,B00111100,B00100000,B00111000,B00100000,B00100000,B00111100,B00000000};
byte F[] = {B00000000,B00111100,B00100000,B00111000,B00100000,B00100000,B00100000,B00000000};
byte G[] = {B00000000,B00111110,B00100000,B00100000,B00101110,B00100010,B00111110,B00000000};
byte H[] = {B00000000,B00100100,B00100100,B00111100,B00100100,B00100100,B00100100,B00000000};
byte I[] = {B00000000,B00111000,B00010000,B00010000,B00010000,B00010000,B00111000,B00000000};
byte J[] = {B00000000,B00011100,B00001000,B00001000,B00001000,B00101000,B00111000,B00000000};
byte K[] = {B00000000,B00100100,B00101000,B00110000,B00101000,B00100100,B00100100,B00000000};
byte L[] = {B00000000,B00100000,B00100000,B00100000,B00100000,B00100000,B00111100,B00000000};
byte M[] = {B00000000,B00000000,B01000100,B10101010,B10010010,B10000010,B10000010,B00000000};
byte N[] = {B00000000,B00100010,B00110010,B00101010,B00100110,B00100010,B00000000,B00000000};
byte O[] = {B00000000,B00111100,B01000010,B01000010,B01000010,B01000010,B00111100,B00000000};
byte P[] = {B00000000,B00111000,B00100100,B00100100,B00111000,B00100000,B00100000,B00000000};
byte Q[] = {B00000000,B00111100,B01000010,B01000010,B01000010,B01000110,B00111110,B00000001};
byte R[] = {B00000000,B00111000,B00100100,B00100100,B00111000,B00100100,B00100100,B00000000};
byte S[] = {B00000000,B00111100,B00100000,B00111100,B00000100,B00000100,B00111100,B00000000};
byte T[] = {B00000000,B01111100,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000};
byte U[] = {B00000000,B01000010,B01000010,B01000010,B01000010,B00100100,B00011000,B00000000};
byte u[] = {B01000010,B00000000,B00000000,B01000010,B01000010,B01000010,B01000010,B00111100};
byte V[] = {B00000000,B00100010,B00100010,B00100010,B00010100,B00010100,B00001000,B00000000};
byte W[] = {B00000000,B10000010,B10010010,B01010100,B01010100,B00101000,B00000000,B00000000};
byte X[] = {B00000000,B01000010,B00100100,B00011000,B00011000,B00100100,B01000010,B00000000};
byte Y[] = {B00000000,B01000100,B00101000,B00010000,B00010000,B00010000,B00010000,B00000000};
byte Z[] = {B00000000,B00111100,B00000100,B00001000,B00010000,B00100000,B00111100,B00000000};
byte kalp[] = {B01000010,B10100101,B10011001,B10011001,B01000010,B00100100,B00011000,B00000000};
byte hic[] = {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};


float timeCount = 0;
void setup() {
    // Serial haberleşmeyi başlatıyoruz.
    Serial.begin(9600);   
    // Tüm pinler Çıkış pini olarak ayarlandı
    // Pinler giriş olsaydı, ekran çok kısık olacaktı.
    for (byte i = 2; i <= 13; i++)
        pinMode(i, OUTPUT);
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
}
void loop() {
delay(5);// daha parlak gözüksün diye bekleme var 
timeCount += 1;
// if(timeCount <  40) {drawScreen(K);} 
if (timeCount <  80) {drawScreen(E);} 
else if (timeCount <  120) {drawScreen(M);} 
else if (timeCount <  160) {drawScreen(R);}
else if (timeCount <  200) {drawScreen(E);}
else if (timeCount <  240) {drawScreen(kalp);} 
else if (timeCount <  260) {drawScreen(hic);}   
else if (timeCount <  280) {drawScreen(kalp);}
else if (timeCount <  300) {drawScreen(hic);} 
else if (timeCount <  320) {drawScreen(kalp);}
else if (timeCount <  340) {drawScreen(hic);}
else if (timeCount <  380) {drawScreen(kalp);}
else if (timeCount <  420) {drawScreen(B);}
else if (timeCount <  460) {drawScreen(U);}
else if (timeCount <  500) {drawScreen(K);}
else if (timeCount <  540) {drawScreen(E);}
else if (timeCount <  580) {drawScreen(T);}
else if (timeCount <  620) {drawScreen(hic);}

else if (timeCount <  720) {drawScreen(hic);}

else {
// starta geri dön
timeCount = 0;
}
}
 void  drawScreen(byte buffer2[]){
     
    
   // serideki tüm dizileri "ON" moduna getiriyoruz.
    for (byte i = 0; i < 8; i++) {
        setColumns(buffer2[i]); // c
        
        digitalWrite(rows[i], HIGH);
        delay(2); // Çoklama efektini görmek istiyorsanız bunu 50 veya 100 olarak ayarlayabilirsiniz

        digitalWrite(rows[i], LOW);
        
    }
}


void setColumns(byte b) {
    digitalWrite(COL_1, (~b >> 0) & 0x01); // 1. bit: 10000000
    digitalWrite(COL_2, (~b >> 1) & 0x01); // 2. bit: 01000000
    digitalWrite(COL_3, (~b >> 2) & 0x01); // 3. bit: 00100000
    digitalWrite(COL_4, (~b >> 3) & 0x01); // 4. bit: 00010000
    digitalWrite(COL_5, (~b >> 4) & 0x01); // 5. bit: 00001000
    digitalWrite(COL_6, (~b >> 5) & 0x01); // 6. bit: 00000100
    digitalWrite(COL_7, (~b >> 6) & 0x01); // 7. bit: 00000010
    digitalWrite(COL_8, (~b >> 7) & 0x01); // 8. bit: 00000001
    
    // Eğer matrisinizin polaritesi benimkinin tersi ise yukarıdaki '~' yi kaldırın.
}