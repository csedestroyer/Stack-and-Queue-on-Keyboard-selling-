#include "stack&queue.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "==================TUBES STD====================" << endl;
    cout << "=================KELOMPOK 12===================" << endl;
    cout << "=====================MENU======================" << endl;

    antrianOrder Q;
    int N = 12;
    int i = 5;
    infotypeantrian antrian;
    adr pAntrian;

    createAntrian(Q);
    while(i <= N){
        cout << "Antrian ke- " << i << endl;
        cout << "Nama : ";
        cin >> antrian.nama;
        cout << "keyboard : ";
        cin >> antrian.barang;
        pAntrian = new element;
        createElement(antrian, pAntrian);
        enqueue(Q, pAntrian);
        i++;
    }

    cout << "transaksi berhasil, antrian selanjutnya" << endl;
    dequeue(Q, pAntrian);
    showSemuaAntrian(Q);
    return 0;
}
