"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 16.04.2020*/
/*Data oddania: 16.04.2020*/
*/
"""

class FenceDecipher:
    def __init__(self,Cword,Cheight):
        self.__word = Cword
        self.__height = Cheight


    def decipher(self):
        result = str("")
        tab = [] 
        for i in range(self.__height):
            tab.append([])

        counter = int(0)
        for i in range(0,len(self.__word),self.__height+1):
            tab[counter].append(self.__word[i])
        counter = int(0)
        for i in range(1,len(self.__word),self.__height-1):
            tab[counter].append(self.__word[i])
        counter = int(0)
        for i in range(2,len(self.__word),self.__height+1):
            tab[counter].append(self.__word[i])
        helptab = [0,0,0,1,1,2,1,3,2,4,2,5,3]
        

        result += tab[0][helptab[0]]
        result += tab[1][helptab[1]]
        result += tab[2][helptab[2]]
        result += tab[0][helptab[3]]
        result += tab[1][helptab[4]]
        result += tab[2][helptab[5]]
        result += tab[0][helptab[6]]
        result += tab[1][helptab[7]]
        result += tab[2][helptab[8]]
        result += tab[0][helptab[9]]
        result += tab[1][helptab[10]]
        result += tab[2][helptab[11]]
        result += tab[0][helptab[12]]
        


        
        return result




def main():
    word = "BZOIJPYECYNSNEAEDOZNUZNCDOCK"
    height = 3
    dec = FenceDecipher(word,height)

    decipherWord = dec.decipher()

    print(decipherWord)


    file = open("result.txt" , "a" , encoding="utf-8")
    file.write(decipherWord)
    file.close()

if __name__ == "__main__":
    main()