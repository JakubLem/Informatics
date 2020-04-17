"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 26.03.2020*/
/*Data oddania: 26.03.2020*/
*/
"""

def getText():
    return str(input("Wpisz tekst: "))

def print_a(text):
    lista = text.split()
    for i in lista:
        print(i)

def print_b(text):
    lista = text.split()
    for i in lista:
        if i[0]==i[len(i)-1]:
            print(i)

def main():
    print_a(getText())
    print_b(getText())

if __name__ == "__main__":
    main()