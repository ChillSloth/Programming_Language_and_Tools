int button = 2; // pin 2 untuk tombol
int kipas = 3; // pin 3 untuk kipas
int buttonState; // kondisi tombol (tertekan/tidak)
int mode = 0; // mode kipas dimulai dari 0 (mati)

void setup()
{
  pinMode(button, INPUT); // pin tombol (2) input
  pinMode(kipas, OUTPUT); // pin kipas (3) output
}

void loop()
{
  // membaca kondisi tombol tertekan/tidak
  buttonState = digitalRead(button);
  // jika tombol tertekan,
  if (buttonState == HIGH) {
    // pindah mode selanjutnya
    mode += 1;
    if (mode == 1) { // Jika mode 1,
      // kipas berputar sepertiga dari kecepatan maks
      analogWrite(kipas, 85);
    } else if (mode == 2) { // Jika mode 2,
      // kipas berputar duapertiga dari kecepatan maks
      analogWrite(kipas, 170);
    } else if (mode == 3) {// Jika mode 3,
      // kipas berputar dengan kecepatan maksimal
      analogWrite(kipas, 255);
    } else if (mode == 4) {// Setelah mode 3,
      mode = 0; //mode reset ke 0 (mati)
      analogWrite(kipas, 0); //kipas kembali diam
    }
    /* Delay supaya satu tekanan tombol tidak
    dianggap lebih dari sekali oleh arduino*/
    delay(400);
  }
  delay(10); // Delay sebentar untuk meningkatkan performa
}