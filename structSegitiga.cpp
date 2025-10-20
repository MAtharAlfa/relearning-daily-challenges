#include <iostream>
#include <string>
using namespace std;

struct Koordinat {
    string nama;
    float xAxis;
    float yAxis;
};

// using s3 = Koordinat[3];
typedef Koordinat s3[3];

void inputKoordinat (Koordinat& ttk); 

void inputSegitiga (s3& ttk); 

void outputKoordinat (Koordinat ttk);

void outputSegitiga (s3 ttk); 



int main () {
    // Koordinat ttk;
    s3 ttk;
    inputSegitiga(ttk);
    outputSegitiga(ttk);
    // inputKoordinat(ttk);
    // outputKoordinat(ttk);
}




void inputKoordinat (Koordinat& ttk) {
    cout << "Nama titik: ";
    cin >> ttk.nama;

    cout << "Titik X: ";
    cin >> ttk.xAxis;

    cout << "Titik Y: ";
    cin >> ttk.yAxis;
}

void inputSegitiga (s3& ttk) {
    for (size_t i = 0; i < 3; i++)
    {
        inputKoordinat(ttk[i]);
    }
}

void outputKoordinat (Koordinat ttk) {
    cout << ttk.nama << "(" << ttk.xAxis << "," << ttk.yAxis << ")";
}

void outputSegitiga (s3 ttk)  {
    for (size_t i = 0; i < 3; i++)
    {
        outputKoordinat (ttk [i]); cout << "; ";
    }
}