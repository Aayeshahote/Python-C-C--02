n=int(input("Enter the number of students"))
arr=[]
for i in range(n):
    arr.append(float(input()))
    #print(arr)

avg=float(sum(arr)/n)
avg=round(avg,3)
sol=0.00
for i in range(n):
    if arr[i]>avg:
        sol+=(arr[i]-avg)
print("$",(sol))
