"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 16.04.2020*/
/*Data oddania: 16.04.2020*/
*/
"""

def insideFloor(number):
        if round(number)<number:
            return round(number)+1
        return round(number)

class ColumnSort:
    def __init__(self,Cword,Ccols,Ckey):
        self.__word = str(Cword)
        self.__cols = int(Ccols)
        self.__key = Ckey
        self.__stop = int(insideFloor(float(len(self.__word)/self.__cols)))

    def getWord(self):
        return self.__word
    
    def getCols(self):
        return self.__cols
    
    def getKey(self):
        return self.__key

    def getStop(self):
        return self.__stop


    def _getTab(self):
        result = []
        for i in range(self.__stop):
            result.append([])
        counter = int(0)
        for i in range(self.__stop):
            for j in range(self.__cols):
                if counter==len(self.__word):
                    return result
                result[i].append(self.__word[counter])
                counter += 1
        return result

    def getCypherWord(self):
        result = str("")
        tab = self._getTab()
        for i in self.__key:
            for j in range(self.__stop):
                if len(result)==len(self.__word):
                    return result
                print(tab[j][i])
                result += tab[j][i]
        return result

def main():
    word = "UCZCIWOŚĆZBIERAPOCHWAŁYIUMIERAZZIMNA"
    cols = 4
    key = [3,2,0,1]

    firstObj = ColumnSort(word,cols,key)

    CypherWord = firstObj.getCypherWord()

    print(CypherWord)

    file = open("result.txt" , "a" , encoding="utf-8")
    file.write(CypherWord)
    file.close()

if __name__ == "__main__":
    main()