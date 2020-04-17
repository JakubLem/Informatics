"""
Jakub Lemiesiewicz III D
*/
/*script.py*/
/*Data wykonania: 14.03.2020*/
/*Data oddania: 14.03.2020*/
/*Ostateczny termin oddania: 18.03.2020
*/
"""
def specyficGenerate(n,m):
    result = []
    for i in range(n):
        result.append([])
        for j in range(m):
            result[i].append(1+(i*5)+(j*2))
    return result

def main():
    tab = specyficGenerate(4,3)
    print(tab)

if __name__ == "__main__":
    main()