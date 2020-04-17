"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 13.03.2020*/
/*Data oddania: 13.03.2020*/
/*Ostateczny termin oddania: 17.03.2020
*/
"""

from random import seed
from random import randint

def generate(n,m):
    seed(1)
    result = []
    for i in range(n):
        result.append([])
        for x in range(m):
            result[i].append(randint(1,100))
    return result

def printTAB(tab,n,m):
    print("\n")
    for i in range(n):
        print(tab[i])
    print("\n")

def changeColumn(indexcol1, indexcol2, tab, n):
    num = int(0)
    indexcol1 -= 1
    indexcol2 -= 1
    for i in range(n):
        num = tab[i][indexcol1]
        tab[i][indexcol1] = tab[i][indexcol2]
        tab[i][indexcol2] = num

def changeTwoRows(tab, m):
    num = int(0)
    print("\n")
    for i in range(2):
        num = int(input("Podaj wiersz do zmiany: "))
        num -= 1
        for j in range(m):
            tab[num][j]=int(input("Podaj element: "))
        print("\n")

def main():
    tab = generate(5,6)
    printTAB(tab,5,6)
    changeColumn(1,2,tab,5)
    printTAB(tab,5,6)
    changeTwoRows(tab,6)
    printTAB(tab,5,6)

if __name__ == "__main__":
    main()