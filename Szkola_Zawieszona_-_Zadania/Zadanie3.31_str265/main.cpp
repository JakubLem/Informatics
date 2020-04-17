/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 15.03.2020*/
/*Data oddania: 15.03.2020*/
/*Ostateczny termin oddania: 25.03.2020*/

#include <iostream>
using namespace std;

void printTAB(int tab[4][2]){
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout<<tab[4][2]<<" ";
        }
        cout<<endl;
    }
}

bool checkExist20(int tab[4][2]){
    for(int i = 0 ; i < 4 ; i++){
        for(int j  = 0 ; j < 2 ; j++){
            if(tab[i][j]>=20){
                return true;
            }
        }
    }
    return false;
}

int iloczynOf3(int tab[4][2]){
    int iloczyn = 1;
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            if(tab[i][j]%3==0){
                iloczyn *= tab[i][j];
            }
        }
    }
    return iloczyn;
}

int countNotZero(int tab[4][2]){
    int count = 0;
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            if(tab[i][j]!=0){
                count += 1;
            }
        }
    }
    return count;
}

int mian(){
    /*a)*/
    int tab[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    /*b)*/
    printTAB(tab);
    /*c)*/
    //obliczanie iloczynu tych elementów które są podzielne przez 3
    int iloczyn = iloczynOf3(tab);
    /*d)*/
    //obliczenie liczby tych elementów tablicy których wartosć jest różna od 0
    int numOfZero = countNotZero(tab);
    //sprawdzenie czy w tablicy istnieje element którego wartość nie jest 
    //mniejsza od 20 !
    if(checkExist20(tab)){
        cout<<"Istnieje";
    } else {
        cout<<"Nie istnieje";
    }
    return 0;
}