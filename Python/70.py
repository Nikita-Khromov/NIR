import random

N = 10000001
summ = 0
flag = 0
for j in range(0, N):
    a = [0, 0, 0, 0, 0, 0]
    for i in range(0, 3):
        a[random.randint(0, 5)] += 1
    for i in range (0, 6):
        if a[i] > 1:
            flag = 1
    if flag == 0:
        summ += 1
    else:
        flag = 0
print(summ/(N*1.0))
