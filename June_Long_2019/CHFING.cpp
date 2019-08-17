def func():
    MOD = 1000000007
    n, k = map(int, input().split())
    result = k-1
    if n<k:
        k -= n
        n -= 1
        N = k//n
        result += k + (k * N) - (n * ((N * (N + 1)) // 2))
    return result%MOD
def main():
    t = int(input())
    for i in range(t):
        print(func())
main()
