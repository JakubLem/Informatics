/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 13.03.2020*/
/*Data oddania: 13.03.2020*/
/*Ostateczny termin oddania: 17.03.2020*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ** generate(int n, int m){
    int ** tab = new int * [m];
    for(int i = 0 ; i < m ; i++){
        tab[i] = new int [n];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            tab[i][j] = rand() % 100;
        }
    }
    return tab;
}

void printTAB(int ** tab, int n, int m){
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void changeColumn(int indexcol1, int indexcol2, int ** tab , int n){
    int num;
    indexcol1 -= 1;
    indexcol2 -= 1;
    for(int i = 0 ; i < n ; i++){
        num = tab[i][indexcol1];
        tab[i][indexcol1] = tab[i][indexcol2];
        tab[i][indexcol2] = num;
    }
}

void changeTwoRows(int ** tab, int m){
    int num;
    cout<<endl;
    for(int i = 0 ; i < 2 ; i++){
        cout<<"Podaj wiersz do zmiany: ";
        cin>>num;
        num -= 1;
        for(int j = 0 ; j < m ; j++){
            cout<<"Podaj T["<<num<<"]["<<j<<"]: ";
            cin>>tab[num][j];
        }
        cout<<endl;
    }
}

void deleteTAB(int ** tab, int n, int m){
    for(int i = 0 ; i < n ; i++){
        delete [] tab[i];
    }
    delete [] tab;
}

int main(){
    int ** tab = generate(5,6);
    printTAB(tab,5,6);
    changeColumn(1,2,tab,5);
    printTAB(tab,5,6);
    changeTwoRows(tab,6);
    printTAB(tab,5,6);
    deleteTAB(tab,5,6);
}