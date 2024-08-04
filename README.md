# uas-algoritma
NAMA: FANDRI INDRANATA
NIM:230401010180
KELAS: IT201

No.1
#include <iostream>: Menyertakan header iostream untuk input/output standar seperti cin dan cout.
#include <string>: Menyertakan header string untuk menggunakan tipe data string.
using namespace std;: Menggunakan namespace std untuk menghindari penulisan std:: sebelum objek seperti cout dan string.
class Person: Mendefinisikan kelas Person dengan dua anggota publik:
string nama: Untuk menyimpan nama seseorang.
string alamat: Untuk menyimpan alamat seseorang.
void sortingBubble(Person persons[], int n): Mengimplementasikan algoritma bubble sort untuk mengurutkan array objek Person berdasarkan nama.
Menggunakan dua loop bersarang untuk membandingkan elemen berdekatan dan menukar jika diperlukan.
void sortingSelection(Person persons[], int n): Mengimplementasikan algoritma selection sort untuk mengurutkan array objek Person berdasarkan nama.
Mencari elemen minimum pada setiap iterasi dan menukarkannya dengan elemen pertama yang belum diurutkan.
void printPersons(Person persons[], int n): Mencetak informasi semua objek Person dalam array ke layar.
int main(): Fungsi utama program.
Deklarasi dan inisialisasi array objek Person dengan data sampel.
Menghitung jumlah elemen dalam array menggunakan sizeof.
Mencetak data awal.
Memanggil fungsi sortingBubble untuk mengurutkan data menggunakan bubble sort dan mencetak hasilnya.
Memanggil fungsi sortingSelection untuk mengurutkan data menggunakan selection sort dan mencetak hasilnya.
Bubble Sort:
Membandingkan elemen berdekatan secara berulang.
Jika elemen pertama lebih besar dari elemen kedua, tukar posisi mereka.
Ulangi proses hingga tidak ada pertukaran yang terjadi pada satu iterasi.
Selection Sort:
Mencari elemen minimum dalam array.
Tukar elemen minimum dengan elemen pertama yang belum diurutkan.
Ulangi proses untuk sisa elemen yang belum diurutkan.


NO.2
pada soal nomor dua ini binary search tidak dapat menghasilkan test case yang diinginkan, dikarenakan pada binary search elemen yang ada di array harus diurutkan terlebih dahulu, oleh karena itu linear search lebih tepat digunakan dibandingkan binary search

#include <iostream>: Menyertakan header iostream untuk input/output standar.
#include <vector>: Menyertakan header vector untuk menggunakan container vector.
using namespace std;: Menggunakan namespace std untuk menghindari penulisan std:: sebelum objek seperti cout, cin, dan lainnya.
vector<int> linearSearch(const vector<int>& arr, int target): Fungsi untuk melakukan pencarian linear pada sebuah array.
arr: Array yang akan dicari.
target: Nilai yang dicari.
Mengembalikan vektor indeks-indeks di mana target ditemukan.
Fungsi ini iterasi melalui array arr dan memeriksa setiap elemen apakah sama dengan target. Jika ditemukan, indeksnya (ditambah 1 untuk menyesuaikan dengan indeks manusia) ditambahkan ke vektor result.
Inisialisasi array: Membuat array temp dengan beberapa angka dan menyalinnya ke vektor arr menggunakan konstruktor vector yang menerima iterator awal dan akhir.
Input target: Meminta pengguna untuk memasukkan angka yang dicari.
Panggilan fungsi: Memanggil fungsi linearSearch dengan arr dan target sebagai argumen, dan menyimpan hasilnya dalam result.
Output hasil: Jika result kosong, berarti target tidak ditemukan. Jika tidak kosong, mencetak indeks-indeks di mana target ditemukan.
