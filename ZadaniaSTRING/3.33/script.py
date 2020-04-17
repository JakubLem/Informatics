"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 25.03.2020*/
/*Data oddania: 25.03.2020*/
*/
"""

def getText():
    return str(input("Wpisz tekst: "))

def print_a(text):
    result = ""
    for i in text:
        result += i
        result += " "
    print(result)

def print_b(text):
    result = ""
    for i in range(len(text)-1,-1,-1):
        result += text[i]
        result += " "
    result += text[0]
    print(result)

def print_c(text):
    result = ""
    for i in range(0,len(text)-1,2):
        result += text[i]
        result += text[i+1]
        result += " "
    if len(text)%2!=0:
        result += text[len(text)-1]
    print(result)
    
def print_d(text):
    result = ""
    for i in range(len(text)-1,1,-3):
        result += text[i]
        result += text[i-1]
        result += text[i-2]
        result += " "
    if len(text)%3!=0:
        if len(text)%3==2:
            result += text[1]+text[0]
        else:
            resut += text[0]
    print(result)


def main():
    print_a(getText())
    print_b(getText())
    print_c(getText())
    print_d(getText())

if __name__ == "__main__":
    main()