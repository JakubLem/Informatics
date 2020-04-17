"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 14.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 23.03.2020
*/
"""

from random import randint
from random import seed

def printTAB(tab):
    for i in range(3):
        print(tab[i])

def if4exist(tab):
    for i in range(3):
        for j in range(4):
            if tab[i][j]>4:
                return True
    return False

def findNumOfIndex(tab):
    count = int(0)
    for i in range(3):
        for j in range(4):
            if i*j>0:
                count += 1
    return count

def getIloczynNotModulo7(tab):
    result = int(1)
    for i in range(3):
        for j in range(4):
            if(tab[i][j]%7!=0):
                result *= tab[i][j]
    return result

def createArray():
    result = []
    for i in range(3):
        result.append([])
        for j in range(4):
            result[i].append(randint(-7,19))
    return result

def main():
    """a)"""
    """wpisywanie liczb całkowitych wygerenowanych losowo z przedziału [7,20) do tablicy o wymiarach 3x4"""
    print("\n")
    print("wpisywanie liczb całkowitych wygerenowanych losowo z przedziału [7,20) do tablicy o wymiarach 3x4")
    print("\n")
    tab = createArray()
    printTAB(tab)

    """b)"""
    """wypisywanie elementów tablicy z podziałem na wiersze"""
    print("\n")
    print("wypisywanie elementów tablicy z podziałem na wiersze")
    print("\n")
    printTAB(tab)

    """c)"""
    """obliczanie iloczynu tych elementów tablicy których wartość nie jest podzielna przez 7"""
    print("\n")
    print("obliczanie iloczynu tych elementów tablicy których wartość nie jest podzielna przez 7")
    print("\n")
    iloczyn = getIloczynNotModulo7(tab)
    print(iloczyn)

    """d)"""
    """obliczanie liczby tych składników tablicy, których iloczyn indesów jest liczbą dodatnią"""
    print("\n")
    print("obliczanie liczby tych składników tablicy, których iloczyn indesów jest liczbą dodatnią")
    print("\n")
    liczba_skladnikow = findNumOfIndex(tab)
    print(liczba_skladnikow)

    """e)"""
    """sprawdzenie czy w tablicy istnieje element którego wartość jest większa o 4"""
    print("\n")
    print("sprawdzenie czy w tablicy istnieje element którego wartość jest większa o 4")
    print("\n")
    if(if4exist(tab)):
        print("Zawiera")
    else:
        print("Nie zawiera")

if __name__ == "__main__":
    main()