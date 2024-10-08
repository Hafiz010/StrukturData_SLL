#include <iostream>
#include "SLL.h"

using namespace std;

void createlist(List &L){
    first(L) = NULL;
}
adr New_elemen(infotype data){
    adr p = new elmlist;
    info(p) = data;
    next(p) = NULL;
    return p;
}
void Insert_First(List &L, adr p){
    if (first(L) != NULL){
        next(p) = first(L);
        first(L) = p;
    }else{
        first(L) = p;
    }
}
void Insert_Last(List &L, adr p){
    adr Q;
    Q = first(L);
    while (next(Q) != NULL){
        Q = next(Q);
    }
    next(Q) = p;
}
void Insert_After(List &L,adr prec, adr p){
    next(p) = next(prec);
    next(prec) = p;
}
void Delete_First(List &L, adr p){
        if (next(first(L)) == NULL){
            first(L) = NULL;
        }else{
            p = first(L);
            first(L) = next(first(L));
            next(p) = NULL;
        }
}
void Delete_Last(List &L, adr p){
    adr Q;
    if (first(L) != NULL){
        if (next(first(L))!= NULL){
            Q = first(L);
            while (next(next(Q))!=NULL){
                Q = next(Q);
            }
            p = next(Q);
            next(Q) = NULL;
        }else{
            Delete_First(L,p);
        }
    }else{
        p = NULL;
    }
}
void Delete_After(List &L,adr prev, adr p){
    if (next(prev)!= NULL){
        p = next(prev);
        next(prev) = next(p);
        next(p) = NULL;
    }else{
        p = NULL;
    }
}
void show(List L){
    adr p;
    p = first(L);
    while (p!= NULL){
        cout << info(p).namaInstansi <<" "<< info(p).jumlah_karyawan <<" "<< info(p).jenisInstansi <<endl;
        cout << endl;
        p = next(p);
    }
}
void SortByJumlah_Karyawan(List &L) {
    if (first(L) != NULL) {
        List sortedList;
        createlist(sortedList);
        adr current = first(L), nextElemen;

        while (current != NULL) {
            nextElemen = next(current);
            if (first(sortedList) == NULL || info(first(sortedList)).jumlah_karyawan > info(current).jumlah_karyawan) {
                next(current) = first(sortedList);
                first(sortedList) = current;
            } else {
                adr temp = first(sortedList);
                while (next(temp) != NULL && info(next(temp)).jumlah_karyawan <= info(current).jumlah_karyawan) {
                    temp = next(temp);
                }
                next(current) = next(temp);
                next(temp) = current;
            }
            current = nextElemen;
        }
        first(L) = first(sortedList);
    } else {
        cout << "List Kosong" << endl;
    }
}
adr SearchBynamaInstansi(List L, string data){
    adr p = first(L);
    while ( p!= NULL){
        if ((info(p).namaInstansi) != data){
            cout << "KETEMU" << endl;
            return p;
        }
        p = next(p);
    }
    return NULL;
}
