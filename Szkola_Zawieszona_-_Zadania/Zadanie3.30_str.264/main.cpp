/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 15.03.2020*/
/*Data oddania: 15.03.2020*/
/*Ostateczny termin oddania: 24.03.2020*/

#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

void printTAB(double ** tab,int m,int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = j ; j < n ; j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

double randDoubleBetween(double M, double N)
{
    return M + (rand() / ( RAND_MAX / (N-M) ) ) ;  
}

double ** generate(int m, int n){
    double ** tab = new double * [n];
    for(int i = 0 ; i < n ; i++){
        tab[i] = new double [m];
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            tab[i][j] = randDoubleBetween(0,26+8.55)-8.55;
        }
    }
    return tab;
}

int sumOfOddRows(double ** tab,int m, int n){
    double sum = 0;
    for(int i = 1 ; i < m ; i+=2){
        for(int j = 0 ; j < m ; j++){
            sum += tab[i][j];
        }
    }
    return sum;
}

void reduceElems(double ** tab, int m , int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(tab[i][j]<0){
                tab[i][j] -= 2;
            }
        }
    }
}

bool check(double ** tab, int m , int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(tab[i][j]>9){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int m,n;
    cout<<"Wprowadz m:";
    cin>>m;
    cout<<"Wprowadz n:";
    cin>>n;
    double ** tab = generate(m,n);
    /*b)*/
    //wypisywanie elementów tablicy z podziałem na wiersze 
    printTAB(tab,m,n);

    /*c)*/
    //obliczanie sumy tych elementów kktórych numetr wiersza jest liczbą nieparzystą
    cout<<endl;
    cout<<"obliczanie sumy tych elementów kktórych numetr wiersza jest liczbą nieparzystą";
    cout<<endl;
    int soor = sumOfOddRows(tab,m,n);
    cout<<soor<<endl;

    /*d)*/
    //zmniejszanie o 2 ujemnych elementów tablicy
    cout<<endl;
    cout<<"zmniejszanie 0 2 ujemnych elementów tablicy";
    cout<<endl;
    reduceElems(tab,m,n);
    printTAB(tab,m,n);


    /*e)*/
    //sprawdzanie czy każdy element tablicy jest mniejszy od 10
    cout<<endl;
    cout<<"sprawdzanie czy każdy element tablicy jest mniejszy od 10";
    cout<<endl;
    if(check(tab,m,n)){
        cout<<"TAK";
    } else {
        cout<<"NIE";
    }
}