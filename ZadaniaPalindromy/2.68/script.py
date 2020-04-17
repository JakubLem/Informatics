"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 30.03.2020*/
/*Data oddania: 30.03.2020*/
*/
"""

def getText():
    return str(input("Wpisz tekst: "))

def EraseSpaceFromString(text):
    result = ""
    for i in text:
        if i!=" ":
            result += i.lower()
    return result

def palindromCHECK(text):
    for i in range(len(text)):
        if text[i]!=text[len(text)-i-1]:
            return False
    return True

def main():
    tekst = EraseSpaceFromString(getText())
    if palindromCHECK(tekst):
        print("Wprowadzone zdanie/wyraz jest palindromem")
    else:
        print("Wprowadzone zdanie/wyraz nie jest palindromem")

if __name__ == "__main__":
    main()