/*
Jakub Lemiesiewicz III D
*/
/*Przyklad3.46.cpp*/
/*Data wykonania: 13.03.2020*/
/*Data oddania: 13.03.2020*/
/*Ostateczny termin oddania: 16.03.2020*/

#include<iostream>
using namespace std;
void wczytaj(int T[][5], int m = 5 , int n = 5){
    cout<<"podaj elementy tablicy: "<<endl;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<"T["<<i<<"]["<<j<<"] = ";
            cin>>T[i][j];
        }
    }
}

void wypisz(int T[][5], int m=5 , int n=5){
    cout<<endl<<"Wczytana tablica:"<<endl;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void wyzeruj(int T[][5] , int m=5 , int n=5){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if (i!=j){
                T[i][j] = 0;
            }
        }
    }
}

int main(){
    /*
        a) wprowadzanie z klawiatury liczb całkowitych
        b) wypisywanie elementów tablicy z podziałem na wiersze
        c) wyzerowanie tych elementów tablicy, które nie znajdują się na głównej przekątnej tablicy
    */


    int T[5][5];
    wczytaj(T);
    wypisz(T);
    wyzeruj(T);
    wypisz(T);
    return 0;
}
//Jakub Lemiesiewicz III D