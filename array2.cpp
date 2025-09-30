#include <iostream>
#include <limits>

using IntData10 = int[10];

double average(IntData10& jmlData){
    double sum = 0;
    for (int loop = 0; loop < sizeof(jmlData)/sizeof(jmlData[0]); loop++){
        sum += jmlData[loop];
    }

    return sum / (sizeof(jmlData)/sizeof(jmlData[0]));
}

int max(IntData10& jmlData){
    int lowerLimit = -2147483648;
    int pilihMahasiswa = -1;
    int count = 0;
    for (int loop = 0; loop < sizeof(jmlData)/sizeof(jmlData[0]); ++loop){
        if (jmlData[loop] > lowerLimit){
            ++count;
            lowerLimit = jmlData[loop];
            pilihMahasiswa = count;
        }
    }
    std::cout << "mahasiswa dengan nilai tertinggi yaitu mahasiswa nomor " << count << "\n";
    std::cout << "maks: "; return lowerLimit;
}

int min(IntData10& jmlData){
    int upperLimit = 2147483647;
    int pilihMahasiswa = -1;
    int count = 0;
    for (int loop = 0; loop < sizeof(jmlData)/sizeof(jmlData[0]); ++loop){
        if (jmlData[loop] < upperLimit){
            ++count;
            upperLimit = jmlData[loop];
            pilihMahasiswa = count;
        }
    }
    std::cout << "mahasiswa dengan nilai terendah yaitu mahasiswa nomor " << count << "\n";
    std::cout << "min: "; return upperLimit;
}

int main () {
    IntData10 jmlMahasiswa; //jumlah mahasiswa 10

    for (int loop = 0; loop < sizeof(jmlMahasiswa)/sizeof(jmlMahasiswa[0]); loop++){
        int temp;
        std::cout << "Nilai mahasiswa " << loop + 1 << ": "; std::cin >> temp;
        jmlMahasiswa[loop] = temp;
    }

    int num = 1;
    for (int nilai : jmlMahasiswa){
        std::cout << "Nilai mahasiswa " <<  num << " = " << nilai << "\n";
        ++num;
    }

    std::cout << "rata-rata nilai mahasiswa: " << average(jmlMahasiswa) << "\n";
    std::cout << max(jmlMahasiswa) << "\n";
    std::cout << "min nilai mahasiswa: " << min(jmlMahasiswa) << "\n";
}