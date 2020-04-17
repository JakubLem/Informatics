/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 26.03.2020*/
/*Data oddania: 26.03.2020*/

#include<iostream>
#include<string>
using namespace std;

string getText(){
    string result;
    cout<<endl<<"Wpisz tekst: ";
    cin>>result;
    return result;
}

void print_not_h(string text){
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]!='h'){
            cout<<text[i];
        }
    }
}

void print_NOT_char(string text){
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]!='a' && text[i]!='A' && text[i]!='o' && text[i]!='O' ){
            cout<<text[i];
        }
    }
}

int main(){
    print_not_h(getText());
    print_NOT_char(getText());
    return 0;
}