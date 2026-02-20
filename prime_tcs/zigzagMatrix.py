m,n = map(int,input().split())
mat = [list(map(int,input().split()))for _ in range(m)]

for i in range(m):
    if(i%2==0):
        print(*mat[i])
    else:
        print(*mat[i][::-1])