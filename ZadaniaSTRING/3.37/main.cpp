/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 26.03.2020*/
/*Data oddania: 27.03.2020*/

#include<iostream>
#include<string>
using namespace std;

void print_a(string text){
    string word = "";
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]==' '){
            if(word[0]=='p' && word.length()%2!=0){
                cout<<word<<" ";
            }
            word = "";
        } else {
            word += text[i];
        }
    }
    if(word[0]=='p' && word.length()%2!=0){
        cout<<word;
    }
}

int main(){
    string text{"pierwszyx pierwszy brak pietruszkax pietruszka banan"};
    print_a(text);
}