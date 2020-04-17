"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 04.01.2020*/
/*Data oddania: 04.01.2020*/
*/
"""

import json

def Alfabet():
    return {"a":0,"b":0,"c":0,"d":0,"e":0,"f":0,"g":0,"h":0,"i":0,"j":0,'k':0,"l":0,"m":0,"n":0,"o":0,"p":0,"q":0,"r":0,"s":0,"t":0,"u":0,"w":0,"x":0,"y":0,"z":0}

def getText():
    return str(input("Wpisz tekst: "))

def AnagramCheck(firstWord,secondWord):
    if len(firstWord)!=len(secondWord):
        return False
    alfabet1 = Alfabet()
    alfabet2 = Alfabet()
    for i in range(len(firstWord)):
        alfabet1[firstWord[i]] += 1
    for i in range(len(secondWord)):
        alfabet2[secondWord[i]] += 1
    if alfabet1 != alfabet2:
        return False
    return True

def main():
    wyraz1 = getText()
    wyraz2 = getText()
    if AnagramCheck(wyraz1,wyraz2):
        print("Słowa są anagramami")
    else:
        print("Słowa nie są anagramami")


if __name__ == "__main__":
    main()