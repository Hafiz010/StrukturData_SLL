#include <iostream>
#include "SLL.h"

using namespace std;

int main()
{
    List MMA;
    Pekerjaan data1,data2,data3,data4,data5,data6;
    infotype data;
    adr P;


    //input data ke1
    createlist(MMA);
    cout << "DATA KE-1" <<endl;
    cout << "Masukkan nama Instansi/Perusahaan : ";
    cin >> data1.namaInstansi;
    cout << endl;
    cout << "Masukkan Jumlah karyawan : ";
    cin >> data1.jumlah_karyawan;
    cout << endl;
    cout << "Masukkan Jenis Instansi : ";
    cin >> data1.jenisInstansi;
    cout << endl;
    //melakukan create elemen dari data yang diinputkan user
    adr newlist1 = New_elemen(data1);


    //insert first list
    Insert_First(MMA,newlist1);
    //inputan data ke2 dari user
    cout << "DATA KE-2" <<endl;
    cout << "Masukkan nama Instansi/Perusahaan : ";
    cin >> data2.namaInstansi;
    cout << endl;
    cout << "Masukkan Jumlah karyawan : ";
    cin >> data2.jumlah_karyawan;
    cout << endl;
    cout << "Masukkan Jenis Instansi : ";
    cin >> data2.jenisInstansi;
    cout << endl;
    //melakukan create elemen dari data yang diinputkan user
    adr newlist2 = New_elemen(data2);

    //insert last
    Insert_Last(MMA, newlist2);

    //input data ke3
    cout << "DATA KE-3" <<endl;
    cout << "Masukkan nama Instansi/Perusahaan : ";
    cin >> data3.namaInstansi;
    cout << endl;
    cout << "Masukkan Jumlah karyawan : ";
    cin >> data3.jumlah_karyawan;
    cout << endl;
    cout << "Masukkan Jenis Instansi : ";
    cin >> data3.jenisInstansi;
    cout << endl;

    // new elemen dari input data user
    adr newlist3 = New_elemen(data3);

    //insert first
    Insert_First(MMA,newlist3);

    //input data ke4
    cout << "DATA KE-4" <<endl;
    cout << "Masukkan nama Instansi/Perusahaan : ";
    cin >> data4.namaInstansi;
    cout << endl;
    cout << "Masukkan Jumlah karyawan : ";
    cin >> data4.jumlah_karyawan;
    cout << endl;
    cout << "Masukkan Jenis Instansi : ";
    cin >> data4.jenisInstansi;
    cout << endl;

    //new elemen dari input data user
    adr newlist4 = New_elemen(data4);

    //insert last
    Insert_Last(MMA, newlist4);

    //input data ke5
    cout << "DATA KE-5" <<endl;
    cout << "Masukkan nama Instansi/Perusahaan : ";
    cin >> data5.namaInstansi;
    cout << endl;
    cout << "Masukkan Jumlah karyawan : ";
    cin >> data5.jumlah_karyawan;
    cout << endl;
    cout << "Masukkan Jenis Instansi : ";
    cin >> data5.jenisInstansi;
    cout << endl;

    //new elemen list dari input data user
    adr newlist5 = New_elemen(data5);

    //insert after
    Insert_After(MMA, newlist4, newlist5);

    //input data ke6
    cout << "DATA KE-6" <<endl;
    cout << "Masukkan nama Instansi/Perusahaan : ";
    cin >> data6.namaInstansi;
    cout << endl;
    cout << "Masukkan Jumlah karyawan : ";
    cin >> data6.jumlah_karyawan;
    cout << endl;
    cout << "Masukkan Jenis Instansi : ";
    cin >> data6.jenisInstansi;
    cout << endl;

    //new elemen list dari input data user
    adr newlist6 = New_elemen(data6);

    //insert after
    Insert_After(MMA, newlist5, newlist6);
    cout << endl;
    cout << "Daftar setelah Insert: " << endl;
    show(MMA);

    //melakukan pencarian dan penghapusan data ke2 dengan delete after
    adr temp;
    cout <<"Mencari Data berdasarkan namaInstansi ke-2" << endl;
    adr prec2 = SearchBynamaInstansi(MMA, data1.namaInstansi);
    cout<<endl;
    if (prec2 != NULL){
        Delete_After(MMA, prec2, temp);
        cout << "Data Instansi/Perusahaan Ke-2 telah terhapus" << endl;
    }

    //melakukan pencarian dan penghapusan data ke6 dengan delete salah satu delete //delete last
    adr prec6 = SearchBynamaInstansi(MMA, data6.namaInstansi);
    if (next(prec6)!= NULL && info(next(prec6)).namaInstansi == data6.namaInstansi){
        Delete_After(MMA,prec6, temp);
        cout << "Data Instansi/Perusahaan Ke-6 telah terhapus" << endl;
    }

    //melakukan sorting, selection sort
    SortByJumlah_Karyawan(MMA);

    //memanggil show setelah sort
    cout <<endl;
    cout <<"Daftar setelah pengurutan : " << endl;
    cout <<endl;
    show(MMA);

    return 0;
}
