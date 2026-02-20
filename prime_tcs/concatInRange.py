data =list(map(int,input().split()))
t=data[0] #number of testcase
index = 1
for _ in range(t):
    N=data[index]
    X=data[index+1]
    Y=data[index+2]
    index +=3
    
    arr = data[index:index+N]
    index+=N
    count = 0
    for i in range(N):
        for j in range(N):
            num = int(str(arr[i])+str(arr[j])) #concating
            if X<=num<=Y:
                count+=1
    print(count)