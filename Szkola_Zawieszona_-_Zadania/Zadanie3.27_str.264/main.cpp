/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 14.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 19.03.2020*/

#include<iostream>
using namespace std;

void RowWithCol(double tab[5][5]){
    double num;
    for(int i = 0 ; i < 5 ; i++){
        num = tab[2][i];
        tab[2][i] = tab[i][2];
        tab[i][2] = num;
    }   
}

void findMinInTab(double tab[5][5]){
    double min;
    int count;
    for(int i = 0 ; i < 5 ; i++){
        min = tab[i][0];
        count = 1;
        for(int j = 1 ; j < 5 ; j++){
            if(min >= tab[i][j]){
                if(min==tab[i][j]){
                    count++;
                } else {
                    min = tab[i][j];
                    count = 1;
                }
            } 
        }
        cout<<endl;
        cout<<"Minimum dla wiersza "<<i<<" to: "<<min<<endl;
        cout<<"Minimum wystapilo w wierszu "<<count<<" razy"<<endl;
    }
}

void insideInsertionTabSort(double tab[5][5]){
    double k;
    int p;
    for(int j = 0 ; j < 5 ; j++){
        for(int i = 1 ; i < 5 ; i++){
            k = tab[i][j];
            p = i -1;
            while(p>=0 && tab[p][j] < k){
                tab[p+1][j]=tab[p][j];
                p -=1;
            }
            tab[p+1][j]=k;
        }
    }
}

void printTAB(double tab[5][5]){
    cout<<endl;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

double randDoubleBetween(double M, double N)
{
    return M + (rand() / ( RAND_MAX / (N-M) ) ) ;  
}

int main(){

    double tab[5][5];
    //wpisywanie do tablicy liczb z przedziału [-20,88]
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            tab[i][j]=randDoubleBetween(-20.0,88.0);
        }
    }
    //wypisywanie tablicy
    printTAB(tab);

    /*a)*/
    //sortowanie nierosnące kolumn tablicy
    cout<<endl;
    cout<<"//sortowanie nierosnące kolumn tablicy";
    cout<<endl;
    insideInsertionTabSort(tab);
    //wypisywanie tablicy
    printTAB(tab);

    /*b)*/
    //znajdowanie minimum dla każdego wierwsza oraz wypisywanie jego powtórzeń
    cout<<endl;
    cout<<" //znajdowanie minimum dla każdego wierwsza oraz wypisywanie jego powtórzeń";
    cout<<endl;
    findMinInTab(tab);
    cout<<endl;

    /*c)*/
    //zmiana wiersza 2 z kolumną 2
    cout<<endl;
    cout<<"//zmiana wiersza 2 z kolumną 2";
    cout<<endl;
    RowWithCol(tab);
    //wypisywanie tablicy
    printTAB(tab);
    return 0;
}