"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 01.04.2020*/
/*Data oddania: 01.04.2020*/
*/
"""


def stringInsertionSort(wyraz):
    for i in range(1,len(wyraz),1):
        k = wyraz[i]
        j = i - 1
        while j>=0 and ord(k)>ord(wyraz[j]):
            wyraz[j+1] = wyraz[j]
            j -= 1
        wyraz[j+1]=k
    return wyraz


def getText():
    return str(input("Wpisz tekst: "))

def AnagramCheck(wyraz1,wyraz2):
    if len(wyraz1)!=len(wyraz2):
        return False
    if stringInsertionSort(list(wyraz1))!=stringInsertionSort(list(wyraz2)):
        return False
    return True

def main():
    wyraz1 = getText()
    wyraz2 = getText()
    if AnagramCheck(wyraz1,wyraz2):
        print("Wyrazy są anagramami")
    else:
        print("Wyrazy nie są anagramami")


if __name__ == "__main__":
    main()