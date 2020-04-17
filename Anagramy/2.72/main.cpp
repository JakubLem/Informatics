/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 01.04.2020*/
/*Data oddania: 01.04.2020*/

#include<iostream>
#include<string>

using namespace std;

string getText(){
    string result;
    cout<<"Wpisz tekst: ";
    getline(cin,result);
    return result;
}

string stringInsertionSort(string wyraz){
    cout<<wyraz<<endl;
    char k,n;
    int j;
    for(int i = 1 ; i < wyraz.length() ; i++){
        k = wyraz[i];
        j = i - 1;
        while(j>=0 && int(k)>int(wyraz[j])){
            n = wyraz[j];
            wyraz[j+1]=n;
            j--;
        }
        wyraz[j+1]=k;
    }
    cout<<wyraz<<endl;
    return wyraz;
}

bool AnagramCheck(string wyraz1, string wyraz2){
    if(wyraz1.length()!=wyraz2.length()){
        return false;
    }
    if(stringInsertionSort(wyraz1)!=stringInsertionSort(wyraz2)){
        return false;
    }
    return true;
}

int main(){
    string wyraz1 = getText();
    string wyraz2 = getText();
    if(AnagramCheck(wyraz1,wyraz2)){
        cout<<"Wyrazy sa anagramami";
    } else {
        cout<<"Wyrazy nie sa anagramami";
    }
    return 0;
}