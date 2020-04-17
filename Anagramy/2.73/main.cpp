/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 01.04.2020*/
/*Data oddania: 01.04.2020*/

#include<iostream>
#include<string>

using namespace std;

void generateTab(int tab[26]){
    for(int i = 0 ; i < 26 ; i++){
        tab[i]=0;
    }
}

string getText(){
    string result;
    cout<<"Wpisz tekst: ";
    getline(cin,result);
    return result;
}

bool similarTab(int tab1[26], int tab2[26]){
    for(int i = 0 ; i < 26 ; i++){
        if(tab1[i]!=tab2[i]){
            return false;
        }
    }
    return true;
}

bool AnagramCheck(string wyraz1, string wyraz2){
    if(wyraz1.length()!=wyraz2.length()){
        return false;
    }
    int alfabet1[26];
    int alfabet2[26];
    generateTab(alfabet1);
    generateTab(alfabet2);
    for(int i = 0 ; i < wyraz1.length() ; i++){
        alfabet1[int(wyraz1[i])-97] += 1;
    }
    for(int i = 0 ; i < wyraz2.length() ; i++){
        alfabet2[int(wyraz2[i])-97] += 1;
    }
    if(similarTab(alfabet1,alfabet2)){
        return true;
    }
    return false;
}

int main(){
    string wyraz1 = getText();
    string wyraz2 = getText();
    if(AnagramCheck(wyraz1,wyraz2)){
        cout<<"Slowa sa anagramami";
    } else {
        cout<<"Slowa nie sa anagramami";
    }
    return 0;
}