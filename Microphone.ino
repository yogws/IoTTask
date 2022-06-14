#include <M5Stack.h> //untuk memasukkan library M5Stack ke dalam sketch
const int Analog = 36; //menginisialisasi data analog output pada pin 36
const int Digtal = 2;//menginisialisasi data digital output pada pin 2
void setup()//untuk inisialisasi mode pin sebagai input atau output dan inisialisasi serial {
// put your setup code here, to run once:
M5.begin();//Memulai program dengan M5
pinMode(Digtal, INPUT_PULLUP);//Inisialisasi pin mode digital untuk input high
dacWrite(25, 0);//sebagai output
M5.Lcd.setCursor(100, 0, 4);//Perintah untuk memulai kursor/tulisan  pada lcd
M5.Lcd.print("MICROPHONE");//Mencetak kata MICROPHONE pada LCD (Output)
}
uint16_t a_data;//Menyimpan tipe data integer dengan nama a_data 16 bits
uint16_t d_data;//Menyimpan tipe data integer dengan nama d_data 16 bits
void loop()//Meneruskan program dan Mengulangi Program sampai arduino dimatikan {
// put your main code here, to run repeatedly:
a_data = analogRead(Analog);//Membaca data analog
d_data = digitalRead(Digtal);//Membaca data digital
Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data);//Untuk mencetak data yang dibaca pada a_data dan d_data
M5.Lcd.setCursor(30, 120, 4);//Perintah untuk memulai kursor/tulisan  pada lcd
M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data);//Untuk mencetak data yang dibaca pada a_data dan d_data
delay(200);//delay selama 0,2 detik
}
