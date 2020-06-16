x, y, z = map(int, input().split())
sura = list(map(int, input().split()))
for i in range(0, x, 1):
    hbe = True
    for j in range(i - 1, max(i - 1 - y, -1), -1):
        if sura[i] >= sura[j]:
            hbe = False
    for j in range(i + 1, min(i + z + 1, x), 1):
        if sura[i] >= sura[j]:
            hbe = False
    if hbe:
        print(i+1)
        exit(0)
