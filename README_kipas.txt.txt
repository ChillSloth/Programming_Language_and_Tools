### Deskripsi
Program ini berfungsi mengoperasikan kipas dari motor DC dengan push button

### Cara Kerja
Ketika program dimulai, terbuat variabel button dan kipas yang memiliki value sesuai pin yang berkaitan. Ada juga variabel buttonState yang menyatakan apakah tombol sedang ditekan atau tidak. Kipas ini dapat memiliki 4 mode (0, 1, 2, 3).
Saat program dimulai, kipas dalam mode 0 atau mati. Kemudian, dimulai perulangan yang memeriksa kondisi tombol. Jika tombol ditekan mode akan berganti ke mode selanjutnya. Mode 1 menggerakkan motor sepertiga dari kecepatan maksimum, mode 2 duapertiga, dan mode 3 kecepatan maksimum. Ketika mencapai mode 4, mode kembali ke 0 dan kipas akan mati. 
Setiap perulangan diakhiri dengan jeda untuk mengurangi frekuensi perulangan. Jika tombol ditekan, akan ada jeda juga supaya satu tekanan tidak terbaca sebagai dua atau lebih tekanan.