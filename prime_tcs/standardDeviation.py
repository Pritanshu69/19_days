import math
n=int(input())
arr=list(map(int,input().split()))

mean = sum(arr)/n

sq_sum=sum((x-mean)**2 for x in arr)

sd = math.sqrt(sq_sum/n)

print(f"{sd:.2f}")