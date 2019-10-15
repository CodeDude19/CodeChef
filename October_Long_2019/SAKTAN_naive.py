def printm(x):
    for i in range(len(x)):
        for j in range(len(x)):
            print(x[i][j],end="  ")
        print()
def main():
    t = int(input())
    for __ in range(t):
        x,y,o = input().split() 
        x,y,o = int(x),int(y),int(o)
        k = [[0]*x for _ in range(y)]
        for p in range(o):
            n,m = input().split()
            n,m = int(n),int(m)
            for i in range(2):
                k[n-1][i] += 1
            for i in range(2):
                k[i][m-1] += 1    
        # printm(k)
        count = 0
        for mat in k:
            for mats in mat:
                if (mats%2!=0):
                    count +=1
        print(count)
main()