#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int x) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Jika x ditemukan, kembalikan indeksnya
        if (arr[mid] == x) {
            return mid;
        }

        // Jika x lebih besar dari arr[mid], cari di bagian kanan
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            // Jika x lebih kecil dari arr[mid], cari di bagian kiri
            right = mid - 1;
        }
    }

    // Jika tidak ditemukan, kembalikan -1
    return -1;
}

int main() {
   int temp[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
	vector<int> arr(temp, temp + sizeof(temp) / sizeof(temp[0]));

    // Mengurutkan array terlebih dahulu (penting untuk binary search)
    sort(arr.begin(), arr.end());

    int x;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;

    int result = binarySearch(arr, x);

    if (result != -1) {
        cout << "Angka " << x << " ada di indeks ke ";
        // Karena bisa ada duplikat, kita perlu mencari semua indeksnya
        int first_index = result;
        int last_index = result;
        while (first_index > 0 && arr[first_index - 1] == x) {
            first_index--;
        }
        while (last_index < arr.size() - 1 && arr[last_index + 1] == x) {
            last_index++;
        }
        if (first_index == last_index) {
            cout << result << endl;
        } else {
            cout << first_index << " sampai " << last_index << endl;
        }
    } else {
        cout << "Angka " << x << " tidak ada dalam array" << endl;
    }

    return 0;
}


