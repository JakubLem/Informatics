"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 14.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 19.03.2020
*/
"""

from random import seed
from random import random
from random import uniform

def printTAB(tab):
    for i in range(5):
        print(tab[i])

def RowWithCol(tab):
    num = float(0.0)
    for i in range(5):
        num = tab[2][i]
        tab[2][i] = tab[i][2]
        tab[i][2] = num
    return tab

def findMinInTab(tab):
    minimum = float(0.0)
    count = int(0)
    for i in range(5):
        minimum = tab[i][0]
        count = 1
        for j in range(5):
            if minimum >= tab[i][j]:
                if minimum == tab[i][j]:
                    count += 1
                else:
                    minimum = tab[i][j]
                    count = 1 
        print("\n")
        print("Minimum dla wiesza",i,"to:",minimum)
        print("Minimum wystapilo w wierszu",count,"razy")
    print("\n")

def insideInsertionTabSort(tab):
    k = float(0.0)
    p = int(0)
    for j in range(5):
        for i in range(5):
            k = tab[i][j]
            p = i - 1
            while(p>=0 and tab[p][j] < k):
                tab[p+1][j]=tab[p][j]
                p -=1
            tab[p+1][j]=k
    return tab

def createArray():
    tab = []
    for i in range(5):
        tab.append([])
        for j in range(5):
            tab[i].append(uniform(-20.0,88.0))
    return tab


def main():
    """tworzenie tablicy"""
    tab = createArray()
    printTAB(tab) #Printowanie tablicy

    """a)"""
    """Sortowanie nie rosnąco kolumn tablicy"""
    print("\n")
    print("Sortowanie nie rosnąco kolumn tablicy")
    print("\n")
    tab = insideInsertionTabSort(tab)
    printTAB(tab) #Printowanie tablicy


    """b)"""
    """znajdowanie minimum dla każdego wierwsza oraz wypisywanie jego powtórzeń"""
    print("\n")
    print("znajdowanie minimum dla każdego wierwsza oraz wypisywanie jego powtórzeń")
    print("\n")
    findMinInTab(tab)
    printTAB(tab) #Printowanie tablicy
    
    """c)"""
    """zmiana wiersza 2 z kolumną 2"""
    print("\n")
    print("zmiana wiersza 2 z kolumną 2")
    print("\n")
    tab = RowWithCol(tab)
    printTAB(tab) #Printowanie tablicy

if __name__ == "__main__":
    main()