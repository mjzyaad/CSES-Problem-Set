from sys import stdin, stdout

n = 0
a = []
best = 1000000000
total = 0

def input():
    global n, a
    n = int(stdin.readline()) 
    a = [int(x) for x in stdin.readline().split()]

def brute(i, sum_a, total):
    global best
    if (i < 0):
        sum_b = total - sum_a
        best = min(abs(sum_a - sum_b), best)
    else:
        brute(i-1, sum_a, total)
        brute(i-1, sum_a - a[i], total)

def solve():
    total = 0
    for i in range(0, n):
        total += a[i]
    brute(n-1, total, total)
    print(best)

if __name__ == "__main__":
    input()
    solve()
