"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 27.03.2020*/
/*Data oddania: 27.03.2020*/
*/
"""

def print_a(text):
    lista = text.split()
    print(lista)
    for i in lista:
        if len(i)%2!=0 and i[0]=='p':
            print(i)


def main():
    text = "pierwszyx pierwszy brak pietruszkax pietruszka banan"
    print_a(text)

if __name__ == "__main__":
    main()
