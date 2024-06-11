#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num_cities;
    int annisa_al_jauhar_2311102014; 
    cout << "Masukkan jumlah kota: ";
    cin >> num_cities;

    vector<string> cities(num_cities);
    cout << "Masukkan nama kota:\n";
    for (int i = 0; i < num_cities; i++) {
        cout << "Kota " << i + 1 << ": ";
        cin >> cities[i];
    }

    vector<vector<int>> distances(num_cities, vector<int>(num_cities, 0));
    cout << "Masukkan jarak antar kota:\n";
    for (int i = 0; i < num_cities; i++) {
        for (int j = 0; j < num_cities; j++) {
            if (i != j) {
                cout << "Jarak dari " << cities[i] << " ke " << cities[j] << ": ";
                cin >> distances[i][j];
            }
        }
    }

    cout << "\n    ";
    for (const auto& city : cities) {
        cout << city << "  ";
    }
    cout << endl;

    // Mencetak baris untuk matriks jarak antar kota
    for (int i = 0; i < num_cities; i++) {
        cout << cities[i] << "  ";
        for (int j = 0; j < num_cities; j++) {
            cout << distances[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}