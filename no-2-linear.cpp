#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk linear search
vector<int> linearSearch(const vector<int>& arr, int target) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            result.push_back(i + 1);  // +1 karena indeks dimulai dari 1
        }
    }
    return result;
}

int main() {
    int temp[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
	vector<int> arr(temp, temp + sizeof(temp) / sizeof(temp[0]));

    
    int target;
    cout << "Masukkan angka yang dicari: ";
    cin >> target;
    
    vector<int> result = linearSearch(arr, target);
    
    if (result.empty()) {
        cout << "Angka " << target << " tidak ada dalam array" << endl;
    } else {
        cout << "Angka " << target << " ada di indeks ke ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) cout << " dan ";
        }
        cout << endl;
    }
    
    return 0;
}
