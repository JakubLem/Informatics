/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 14.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 23.03.2020*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void printTAB(int tab[3][4]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool if4exist(int tab[3][4]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(tab[i][j]>4){
                return true;
            }
        }
    }
    return false;
}

int findNumOfIndex(int tab[3][4]){
    int count = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(i*j>0){
                count++;
            }
        }
    }
    return count;
}

int getIloczynNotModulo7(int tab[3][4]){
    int result = 1;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(tab[i][j]%7!=0){
                result *= tab[i][j];
            }
        }
    }
    return result;
}

void createArray(int tab[3][4]){
    srand(time(NULL));
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            tab[i][j] = (rand() % 26) - 7; 
        }
    }
}

int main(){
    /*a)*/
    //wpisywanie liczb całkowitych wygerenowanych losowo z przedziału [7,20) do tablicy o wymiarach 3x4
    cout<<endl;
    cout<<"wpisywanie liczb całkowitych wygerenowanych losowo z przedziału [7,20) do tablicy o wymiarach 3x4";
    cout<<endl;
    int tab[3][4];
    createArray(tab);
    printTAB(tab);

    /*b)*/
    //wypisywanie elementów tablicy z podziałem na wiersze
    cout<<endl;
    cout<<"wypisywanie elementow tablicy z podzialem na wiersze";
    cout<<endl;
    printTAB(tab);

    /*c)*/
    //obliczanie iloczynu tych elementów tablicy których wartość nie jest podzielna przez 7
    cout<<endl;
    cout<<"obliczanie iloczynu tych elementow tablicy ktorych wartosc nie jest podzielna przez 7";
    cout<<endl;
    int iloczyn = getIloczynNotModulo7(tab);
    cout<<iloczyn<<endl;

    /*d)*/
    //obliczanie liczby tych składników tablicy, których iloczyn indesów jest liczbą dodatnią
    cout<<endl;
    cout<<"oobliczanie liczby tych składników tablicy, których iloczyn indesów jest liczbą dodatnią";
    cout<<endl;
    int liczba_skladnikow = findNumOfIndex(tab);
    cout<<liczba_skladnikow<<endl;

    /*e)*/
    //sprawdzenie czy w tablicy istnieje element którego wartość jest większa o 4
    cout<<endl;
    cout<<"sprawdzenie czy w tablicy istnieje element którego wartość jest większa o 4";
    cout<<endl;
    if(if4exist(tab)){
        cout<<"Zawiera";
    } else {
        cout<<"Nie zawiera";
    }

    return 0;
}