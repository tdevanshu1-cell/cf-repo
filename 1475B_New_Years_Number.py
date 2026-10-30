t=int(input())
while(t>0):
    t-=1
    n=int(input())
    rem=n%2020
    count=n//2020
    if (rem>count):
        print("NO")
    else:
        print("YES")