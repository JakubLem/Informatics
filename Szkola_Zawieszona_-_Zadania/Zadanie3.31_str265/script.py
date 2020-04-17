"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 15.03.2020*/
/*Data oddania: 15.03.2020*/
/*Ostateczny termin oddania: 25.03.2020
*/
"""

def printTAB(tab):
    for i in range(4):
        print(tab[i])

def iloczynOf3(tab):
    iloczyn = int(1)
    for i in range(4):
        for j in range(2):
            if tab[i][j]%3==0:
                iloczyn *= tab[i][j]
    return iloczyn

def countNotZero(tab):
    count = int(0)
    for i in range(4):
        for j in range(2):
            if(tab[i][j]!=0):
                count += 1
    return count

def checkExist20(tab):
    for i in range(4):
        for j in range(2):
            if tab[i][j]>=20:
                return True
    return False

def main():
    """a)"""
    tab = [[1,2],[3,4],[5,6],[7,8]]
    """b)"""
    printTAB(tab)
    """c)"""
    """obliczanie iloczynu tych elementów które są podzielne przez 3"""
    print("\n")
    print("obliczanie iloczynu tych elementów które są podzielne przez 3")
    print("\n")
    iloczyn = iloczynOf3(tab)
    print(iloczyn)
    """d)"""
    """obliczenie liczby tych elementów tablicy których wartosć jest różna od 0"""
    print("\n")
    print("obliczenie liczby tych elementów tablicy których wartosć jest różna od 0")
    print("\n")
    numOfZero = countNotZero(tab)
    print(numOfZero)
    """e)"""
    """sprawdzenie czy w tablicy istnieje element którego wartość nie jest większa od 20"""
    print("\n")
    print("sprawdzenie czy w tablicy istnieje element którego wartość nie jest większa od 20")
    print("\n")
    if checkExist20(tab):
        print("Istnieje")
    else:
        print("Nie istnieje")




if __name__ == "__main__":
    main()
