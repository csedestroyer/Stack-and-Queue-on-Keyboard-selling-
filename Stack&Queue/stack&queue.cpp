#include "stack&queue.h"

void createAntrian(antrianOrder &Q){
    Head(Q) = nil;
    Tail(Q) = nil;
}

void createElement(infotypeantrian antrianBaru, adr &pAntrian){
    next(pAntrian) = nil;
    info(pAntrian) = antrianBaru;
}

void enqueue(antrianOrder &Q, adr pAntrian){
    if(Head(Q) == nil && Tail(Q) == nil){
        Head(Q) = pAntrian;
        Tail(Q) = pAntrian;
    }else{
        next(Tail(Q)) = pAntrian;
        Tail(Q) = pAntrian;
    }
}

void dequeue(antrianOrder &Q, adr &pAntrian){
    if(Q.Head == nil && Q.Tail == nil){
        cout << "Queue kosong!!" << endl;
    }else{
        pAntrian = Head(Q);
        Head(Q) = next(pAntrian);
        next(pAntrian) = nil;
    }
}

void showSemuaAntrian(antrianOrder Q){
    adr p = Head(Q);
    while(p != nil){
        cout << "Nama : " << info(p).nama << endl;
        cout << "Barang : " << info(p).barang << endl;
        p = next(p);
    }
}

void createStack_1301213215(Stack &S){
    S.Top = 0;
}

bool isEmpty_1301213215(Stack S){
    return S.Top == 0;
}

bool isFull_1301213215(Stack S){
    return S.Top == MAX;
}

void push_1301213215(Stack &S, infotypestack x){
    if(isFull_1301213215(S)){
        return;
    }else{
        S.Top ++;
        S.info[S.Top] = x;
    }
}

infotype pop_1301213215(Stack &S){
    infotypestack data;
    if(isEmpty_1301213215(S)){
        return NULL;
    }else{
        data = S.info[S.Top];
        S.info[S.Top] = NULL;
        S.Top --;
        return data;
    }
}
void print_1301213215(Stack S){
    if(isEmpty_1301213215(S)){
        cout << "Stack Kosong" << endl;
        return;
    }else{
        for(int n = S.Top; n >= 1; n--){
            cout << S.info[n] << " ";
        }
    }
}


