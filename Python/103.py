import random

N = 1000000
m = int(input())
summ = 0
for i in range(0, N):
    a = [0, 0, 0, 0, 0, 0]
    for j in range(0, m):
        a[random.randint(0, 5)] += 1
    if a[4] >= 2:
        summ += 1
print(summ/(N*1.0))
