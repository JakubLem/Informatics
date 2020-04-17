"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 14.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 20.03.2020
*/
"""

def printTAB(tab):
    for i in range(4):
        print(tab[i])

def dsr(tab): #delete selected row
    print("\n")
    row = int(input("Wybierz wiersz ktory chcesz usunac:"))
    while row < 3 : 
        for i in range(5):
            tab[row][i] = tab[row+1][i]
        row += 1
    for i in range(5):
        tab[3][i] = 0
    return tab

def main():
    tab = [[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20]]
    printTAB(tab)
    tab = dsr(tab)
    printTAB(tab)

if __name__ == "__main__":
    main()