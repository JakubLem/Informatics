"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 26.03.2020*/
/*Data oddania: 26.03.2020*/
*/
"""

def check_a(word):
    res = 0
    for i in word:
        if i=="a":
            res += 1
    return res

def check_NOT_B(word):
    res = 0
    for i in range(0,len(word)-1,2):
        if word[i]!="B":
            res += 1
    return res



def main():
    word = "testaaBBBB"

if __name__ == "__main__":
    main()