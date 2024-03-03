#ifndef STACK&QUEUE_H_INCLUDED
#define STACK&QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

#define next(Q) (Q)->next
#define info(Q) (Q)->info
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define nil NULL

struct infotypeantrian{
    string nama;
    string barang;
    bool kepastian;
};

typedef struct element *adr;

struct element{
    infotypeantrian info;
    adr next;
};

struct antrianOrder{
    adr Head;
    adr Tail;
};

const int MAX = 15;

typedef string infotypestack;

struct Stack{
    infotypestack info;
    int Top;
};

void createAntrian(antrianOrder &Q);
void createElement(infotypeantrian antrianBaru, adr &pAntrian);
void enqueue(antrianOrder &Q, adr pAntrian);
void dequeue(antrianOrder &Q, adr &pAntrian);
void showSemuaAntrian(antrianOrder Q);

void createStack_1301213215(Stack &S);
bool isEmpty_1301213215(Stack S);
bool isFull_1301213215(Stack S);
void push_1301213215(Stack &S, infotypestack x);
infotypestack pop_1301213215(Stack &S);
void print_1301213215(Stack S);

void cari();
void pembelian();


#endif // STACK&QUEUE_H_INCLUDED
