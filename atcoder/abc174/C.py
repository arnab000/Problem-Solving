k=int(input())
ans=7
ans2=10
prev=7
hbe=False
if ans%k==0:
    print(1)
    hbe=True
else:
    for i in range(0, k + 1, 1):
        ans=(7*ans2+prev)%k
        if ans%k==0:
            print(i+2)
            hbe=True
            break
        prev=ans
        ans2=(ans2*10)%k
if hbe==False:
    print(-1)

