/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 26.03.2020*/
/*Data oddania: 26.03.2020*/

#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

void print_a(string text){
    string word = "";
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]==' '){
            cout<<word<<endl;
            word = "";
        } else {
            word += text[i];
        }
    }
    cout<<word;
}

void print_b(string text){
    string word = "";
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]==' '){
            if(word[0]==word[word.length()-1]){
                cout<<word<<endl;
            }
            word = "";
        } else {
            word += text[i];
        }
    }
    if(word[0]==word[word.length()-1]){
        cout<<word<<endl;
    }
}

int main () {
    string name;
    cout << "Wpisz tekst: ";
    getline (cin,name);
    print_b(name);
    return 0;
}