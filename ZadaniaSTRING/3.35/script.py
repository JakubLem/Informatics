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

def print_not_h(text):
    result = ""
    for i in text:
        if i!='h':
            result+=i
    print(result)

def print_NOT_char(text):
    result = ""
    for i in text:
        if i!='a' and i !='A' and i!='o' and i!='O':
            result += i
    print(result)
def main():
    print_NOT_char(getText())

if __name__ == "__main__":
    main()
