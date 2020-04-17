/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 08.04.2020*/
/*Data oddania: 08.04.2020*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string getText(){
    string result;
    cout<<"Wpisz tekst: ";
    getline(cin,result);
    return result;
}

string getWord(){
    string result;
    cout<<"Wpisz slowo: ";
    cin>>result;
    return result;
}

vector<string> getIL(string tekst){
    vector<string> result;
    string appendWord = "";
    for(auto a: tekst){
        if(a==' '){
            result.push_back(appendWord);
            appendWord = "";
        } else {
            appendWord += a;
        }
    }
    return result;
}

int zad274check(string word, string tekst){
    vector<string> list = getIL(tekst);
    int i = 0;
    for(auto obj: list){
        if(obj==word){
            return i;
        }
        i++;
    }
    return -1;
}

int main(){
    string tekst = getText();
    string word = getWord();
    int result = zad274check(word,tekst);
    if(result!=-1){
        cout<<result;
    } else {
        cout<<"Nie znaleziono takiego slowa!";
    }
    return 0;
}