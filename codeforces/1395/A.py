x = int(input())
for i in range(1, x + 1, 1):
    count = 0

    mn = 10000000000
    sura = list(map(int, input().split()))
    for j in range(0, 4, 1):
        if sura[j] % 2 == 0:
            count += 1
    if count >= 3:
        print("Yes")
        continue

    for j in range(0, 3, 1):
        mn = min(mn, sura[j])
    if mn < 1:
        print("No")
        continue

    for j in range(0, 3, 1):
        sura[j] -= 1
    sura[3] += 3 
    count = 0
    for j in range(0, 4, 1):
        if sura[j] % 2 == 0:
            count += 1

    if count >= 3:
        print("Yes")
    else:
        print("No")


