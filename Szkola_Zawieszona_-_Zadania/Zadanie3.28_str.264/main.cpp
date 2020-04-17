/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 14.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 20.03.2020*/

#include <iostream>
using namespace std;

void printTAB(int tab[4][5]){
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

void dsr(int tab[4][5]){ //delete selected row
    cout<<endl;
    int row;
    cout<<"Wybierz wiersz ktory chcesz usunac: ";
    cin>>row;
    while(row<3){
        for(int i = 0 ; i < 5 ; i++){
            tab[row][i] = tab[row+1][i];
        }
        row++;
    }
    for(int i = 0 ; i < 5 ; i++){
        tab[3][i] = 0;
    }
}

int main(){
    int tab[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    printTAB(tab);
    dsr(tab);
    printTAB(tab);
    return 0;
}