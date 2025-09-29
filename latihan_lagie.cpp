#include <iostream>
using namespace std;

int main () {
    int nilai;

    cout << "Nilai: ";
    cin >> nilai;

    if (nilai >= 81) {
        cout << "IP saya A";
    } else if (nilai >= 65 && nilai <= 80) 
    {
        cout << "IP saya B";
    } else if (nilai >= 50 && nilai <= 64) 
    {
        cout << "IP saya C";
    } else 
    {
        cout << "IP saya E";
    }
    return 0;
}