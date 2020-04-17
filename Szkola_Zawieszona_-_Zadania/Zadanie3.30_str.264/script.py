#"""
#Jakub Lemiesiewicz III D
#

#//*Data wykonania: 15.03.2020*/
#/*Data oddania: 15.03.2020*/
#/*Ostateczny termin oddania: 24.03.2020
#*/
#"""

from random import random
from random import uniform
from random import seed

def printTAB(tab,m,n):
    for i in range(m):
        print(tab[i])

def check(tab,m,n):
    for i in range(m):
        for j in range(n):
            if tab[i][j]>9:
                return False
    return True

def reduceElems(tab,m,n):
    for i in range(m):
        for j in range(n):
            if tab[i][j]<0 :
                tab[i][j] -= 2
    return tab

def createArray(m,n):
    tab = []
    for i in range(m):
        tab.append([])
        for j in range(n):
            tab[i].append(uniform(-5.44,26.0))
    return tab

def main():
    m = int(input("Wprowadz m: "))
    n = int(input("Wprowadz n: "))
    """a)"""
    """wpisywanie liczb rzeczywistych do tablicy"""
    tab = createArray(m,n)
    """b)"""
    """wypisywanie elementów tablicy z podziałem na wiersze"""
    print("\n")
    print("wypisywanie elementów tablicy z podziałem na wiersze")
    print("\n")
    printTAB(tab,m,n)

    """c)"""
    """obliczanie sumy tych elementów kktórych numetr wiersza jest liczbą nieparzystą"""
    print("\n")
    print("obliczanie sumy tych elementów kktórych numetr wiersza jest liczbą nieparzystą")
    print("\n")

    """d)"""
    """zmniejszanie o 2 ujemnych elementów tablicy"""
    tab = reduceElems(tab,m,n)
    printTAB(tab,m,n)

    """e)"""
    """sprawdzanie czy każdy element tablicy jest mniejszy od 10"""
    print("\n")
    print("sprawdzanie czy każdy element tablicy jest mniejszy od 10")
    print("\n")
    if check(tab,m,n):
        print("TAK")
    else:
        print("NIE")

if __name__ == "__main__":
    main()