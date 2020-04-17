"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 08.04.2020*/
/*Data oddania: 08.04.2020*/
*/
"""
def getText():
    return str(input("Wpisz tekst: "))

def testAB(tekst):
    word = str("")
    for i in range(0,len(tekst)-3,1):
        word = str("")
        for j in range(i,i+4,1):
            word += tekst[j]
        print(i)
        print(word)
        if word=="ABAB":
            return True
    return False

def main():
    tekst = getText()
    if testAB(tekst):
        print("Tekst zawiera wrzozec ABAB")
    else:
        print("Tekst nie zawiera wzorca ABAB")

if __name__ == "__main__":
    main()