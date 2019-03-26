/*
Nama Program 	: Pretest-04
Nama 			: Sarah Navianti Dwi S
NPM 			: 140810180021
Kelas 			: A
Tanggal Buat 	: Selasa, 26 Maret 2019
Deskripsi 		: Pengelolaan singly linked list
*/
#include <iostream>
#include<stdlib.h>

using namespace std;

struct ElemtList{
    char nama[40];
    char npm[14];
    float ipk;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First);
void createElemt(pointer& pBaru);
void insertLast (List& First, pointer pBaru);
void insertSortNPM (List& First, pointer pBaru);
void traversal (List First);


int main()
{
    pointer p;
    List mhsw;
    int pilih;

    createList(mhsw);
    while(1){
        system("cls");
        cout<<"Menu"<<endl;
        cout<<"1. Tambah Data "<<endl;
        cout<<"2. Tampilkan"<<endl;
        cout<<"3. Exit"<<endl;
        cout << "Masukan Pilihan : "; cin >> pilih;
        switch(pilih){
        case 1:
            createElemt(p);
            insertLast(mhsw, p);
        break;

        case 2:
            traversal(mhsw);
        break;

        case 3:
            return 0;
            break;
        }
        system("pause");
    }
}
void createList(List& First){
    First = NULL;
    }

void createElemt(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"Nama\t: "; cin.ignore();cin.getline(pBaru->nama,40);
    cout<<"NPM\t: "; cin>>pBaru->npm;
    cout<<"IPK\t: "; cin>>pBaru->ipk;
    pBaru->next=NULL;
}
void traversal(List First){
    cout<<"\nNo\t"<<"\tNama\t\t"<<"NPM\t\t"<<"IPK\t"<<endl;
    pointer pBantu;
    pBantu=First;
    int i=1;
    while(pBantu != NULL){
        cout<<i<<"\t"<<pBantu->nama<<"\t\t\t"<<pBantu->npm<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
        i++;
    }
}

void insertLast(List& First, pointer pBaru){
    pointer Last;
    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}
