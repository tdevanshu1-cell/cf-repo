t = int(input())
 
for _ in range(t):
    line = input().split()
    n = int(line[0])
    k = int(line[1])
    x = int(line[2])
    
    min_sum = k * (k + 1) // 2
    max_sum = k * (2 * n - k + 1) // 2
    
    if min_sum <= x <= max_sum:
        print("YES")
    else:
        print("NO")