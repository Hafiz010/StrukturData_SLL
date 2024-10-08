#ifndef SLL_H
#include <iostream>
#define first(L) L.first
#define next(P) P ->next
#define info(P) P ->info
using namespace std;

struct Pekerjaan{
    string namaInstansi;
    int jumlah_karyawan;
    string jenisInstansi;
};

typedef Pekerjaan infotype;
typedef struct elmlist *adr;

struct elmlist {
    infotype info;
    adr next;
};
struct List {
    adr first;
};

void createlist(List &L);
adr New_elemen(infotype data);
void Insert_First(List &L, adr p);
void Insert_Last(List &L, adr p);
void Insert_After(List &L,adr prec, adr p);
void Delete_First(List &L, adr p);
void Delete_Last(List &L, adr p);
void Delete_After(List &L,adr prev, adr p);
void show(List L);
void SortByJumlah_Karyawan(List &L);
adr SearchBynamaInstansi(List L, string data);

#endif // SLL_H
