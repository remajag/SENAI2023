// Menyalakan LED Menggunakan Arduino UNO
// Menyalakan LED dengan Aktif HIGH
 
void setup()
{
   // menjadikan PIN 4 dan PIN 3 sebagai OUTPUT
   pinMode(4, OUTPUT);
   pinMode(3, OUTPUT);
}
 
void loop()
{
   // Menyalakan PIN 4 (HIGH = Memberi tegangan pada PIN 4)
   // Mematikan PIN 3 (LOW = Tidak Memberi tegangan pada PIN 3)
   digitalWrite(4, HIGH);
   digitalWrite(3,LOW);
   // Pause selama 1 detik
   delay(1000);
 
   // Mematikan PIN 4 (LOW = Tidak Memberi tegangan pada PIN 4)
   // Menyalakan PIN 3 (HIGH = Memberi tegangan pada PIN 3)
   digitalWrite(4, LOW);
   digitalWrite(3,HIGH);
   // Pause selama 1 detik
   delay(1000);
}
