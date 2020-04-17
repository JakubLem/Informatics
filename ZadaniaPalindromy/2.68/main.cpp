/*
Jakub Lemiesiewicz III D
*/
/*main.cpp*/
/*Data wykonania: 30.03.2020*/
/*Data oddania: 30.03.2020*/

#include<iostream>
#include<string>
using namespace std;

string getText(){
    string result;
    cout<<"Wpisz tekst: ";
    getline(cin,result);
    return result;

}

string EraseSpaceFromString(string text){
    string result = "";
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]!=' '){
            result+=tolower(text[i]);
        }
    }
    return result;
}

bool palindromCHECK(string text){
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]!=text[text.length()-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string text = EraseSpaceFromString(getText());
    if(palindromCHECK(text)){
        cout<<"Wprowadzone zdanie/wyraz jest palindromem";
    } else {
        cout<<"Wprowadzone zdanie/wyraz nie jest palindromem";
    }
}