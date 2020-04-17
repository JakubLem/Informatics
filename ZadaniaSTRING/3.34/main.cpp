/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 26.03.2020*/
/*Data oddania: 26.03.2020*/

#include<iostream>
#include<string>
using namespace std;

int check_a(string word){
    int sum = 0;
    for(int i = 0 ; i < word.length() ; i++){
        if(word[i]=='a'){
            sum++;
        }
    }
    return sum;
}

int check_NOT_B(string word){
    int sum = 0;
    for(int i = 0 ; i < word.length() ; i+=2){
        if(word[i]!='B'){
            sum++;
        }
    }
    return sum;
}

int main(){
    string word{"testa_wordaa"};
    cout<<check_a(word)<<endl;
    cout<<check_NOT_B(word);
    return 0;
}