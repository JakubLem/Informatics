/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 25.03.2020*/
/*Data oddania: 25.03.2020*/

#include<iostream>
#include<string>
using namespace std;

string getText(){
    string result;
    cout<<endl<<"Wpisz tekst: ";
    cin>>result;
    return result;
}

void print_a(string text){
    for(int i = 0 ; i < text.length() ; i++){
        cout<<text[i]<<" ";
    }
}

void print_b(string text){
    for(int i = text.length()-1 ; i >= 0 ; i--){
        cout<<text[i]<<" ";
    }
}

void print_c(string text){
    for(int i = 0 ; i < text.length() ; i+=2){
        cout<<text[i]<<text[i+1]<<" ";
    }
}

void print_d(string text){
    for(int i = text.length()-1 ; i >= 0 ; i-=3){
        cout<<text[i]<<text[i-1]<<text[i-2]<<" ";
    }
}

int main(){
    string text = getText();
    print_a(text);
    print_b(text);
    print_c(text);
    print_d(text);
}