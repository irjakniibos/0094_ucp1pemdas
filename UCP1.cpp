/*1. int namaMahasiswa
    float namaMahasiswa
    string namaMahasiswa  */

/*2. prosedur = void idMahasiswa(){//kode program} 
     fungsi   = int main (){//kode program}
*/

/*3. looping for 
int main()
{
    int i;
    int arr[5];

    for (i = 0; i < 5; i++)
    {   

        cout << i << ":" << "Irza Yaumil Syahrar" << endl;
    }
}
*/

/*4.conditional statemnt
int main (){
    int i;
    int arr[5];
if(i=0; i <5 ;i++)
    {
        cout << "kamu lulus ";
    }else{
        cout << "kamu tidak lulus";
    }
}
*/

/*5 struct mahasiswa {
    string Nama;
    string Alamat;}
*/

#include <iostream>
using namespace std;
string NamaKota;
string statusKota;

void inputNama (){
    
    cout <<"Masukan Nama Kota :";
    cin >> NamaKota;

    double nilaiSen1, nilaiSen2,nilaiSen3; 
    

    cout << "Masukkan nilai sensor 1 : ";
    cin >> nilaiSen1;

    cout << "Masukkan nilai Sensor 2 : ";
    cin >> nilaiSen2;
    
    cout << "Masukkan nilai Sensor 3 : ";
    cin >> nilaiSen3; 
    double rataRata = (nilaiSen1 + nilaiSen2 + nilaiSen3) / 3;

    if (rataRata >= 75) {
        statusKota = "Kota Sehat";
    }
    else if (nilaiSen1 >= 45) {
        statusKota = "Kota  Sehat";
    }
    else {
        statusKota = "Kota Tidak Sehat";
    }
    
    cout << "Status kota " << statusKota << endl;


}


int main() {
    int pilihan;
    do {
        system("cls");
        cout << "=============== MENU ===============" << endl;
        cout << "1. Input Data Kota" << endl;
        cout << "2. Status Kota " << endl;
        cout << "3. Exit" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            inputNama();
            break;
        case 2:
            cout << "Status Kota " << NamaKota << " adalah  = " << statusKota  << endl;
            system("pause");
            break;
        case 3:
            break;
        default:
            cout << "Pilihan tidak ada" << endl;
            system("pause");
            break;
        }
    } while (pilihan != 3);
    return 0;
}











