#include <iostream>
#include <string>

using namespace std;

class Person {
	public:
    string nama;
    string alamat;
};

void sortingBubble(Person persons[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (persons[j].nama > persons[j + 1].nama) {
                swap(persons[j], persons[j + 1]);
            }
        }
    }
}

void sortingSelection(Person persons[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (persons[j].nama < persons[min_idx].nama) {
                min_idx = j;
            }
        }
        swap(persons[min_idx], persons[i]);
    }
}

void printPersons(Person persons[], int n) {
    for (int i = 0; i < n; i++) {
        cout << persons[i].nama << "\t" << persons[i].alamat << endl;
    }
}

int main() {
    Person persons[] = {
        {"Fahmi", "Jakarta"}, {"Romi", "Solo"}, {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"}, {"Ruli", "Bandung"}, {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"}, {"Zaki", "Madiun"}
    };
    int n = sizeof(persons) / sizeof(persons[0]);

    cout << "Data sebelum diurutkan:\n";
    printPersons(persons, n);

    sortingBubble(persons, n);
    cout << "\nData setelah diurutkan dengan Bubble Sort:\n";
    printPersons(persons, n);

    sortingSelection(persons, n);
    cout << "\nData setelah diurutkan dengan Selection Sort:\n";
    printPersons(persons, n);

    return 0;
}

