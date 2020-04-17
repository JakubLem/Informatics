/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 13.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 18.03.2020*/

#include <iostream>
using namespace std;
int main(){
    int tablica[4][3];
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablica[i][j] = 1 + (i * 5) + (j * 2);
            cout<<tablica[i][j]<<" ";
        }
    }
}