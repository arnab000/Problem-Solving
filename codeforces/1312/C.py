for t in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    x = []
    s = 0
    for i in range(len(a)):
        if s == 1:
            break
        while a[i] != 0:
            j = 0
            while k**j <= a[i]:
                j += 1
            a[i] -= k**(j - 1)
            x += [j - 1]
            if  x.count(j - 1) > 1:
                s = 1
                break
    if s == 0:
        print('YES')
    else:
        print('NO')