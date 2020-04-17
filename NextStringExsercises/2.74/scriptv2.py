"""
Jakub Lemiesiewicz III D
*/
/*scriptv2.py*/
/*Data wykonania: 08.04.2020*/
/*Data oddania: 08.04.2020*/
*/
"""

def getText():
    return str(input("Wpisz tekst: "))

def getWord():
    return str(input("Wpisz slowo: "))

def getID(tekst,word):
    for i in range(0,len(tekst),1):
        if tekst[i]==word:
            return i
    return -1

def main():
    tekst = getText()
    word = getWord()
    tekst = tekst
    if tekst.find(word):
        print(getID(tekst.split(),word))
    else:
        print("Nie znaleziono takiego slowa!")

if __name__ == "__main__":
    main()