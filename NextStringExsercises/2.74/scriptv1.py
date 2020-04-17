"""
Jakub Lemiesiewicz III D
*/
/*scriptv1.py*/
/*Data wykonania: 08.04.2020*/
/*Data oddania: 08.04.2020*/
*/
"""

def getText():
    return str(input("Wpisz tekst: "))

def getWord():
    return str(input("Wpisz slowo: "))

def zad274check(word,tekst):
    for i in range(0,len(tekst),1):
        if tekst[i]==word:
            return i
    return -1

def main():
    tekst = getText()
    word = getWord()
    result = zad274check(word,tekst.split())
    if result!=-1:
        print(result)
    else:
        print("Nie znaleziono takiego slowa!")

if __name__ == "__main__":
    main()