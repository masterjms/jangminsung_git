#range(1,11) - 1이상 11미만을 차례대로 대입한다.
sum = 0
for i in range(1,11):
    sum = sum + i
print(sum)
#이중 for문 # 구구단
for i in range(2,10):
    for j in range(1,10):
        print(i*j, end = " ")
    print(' ')
#리스트 for문
result = [x * y for x in range(2,10) for y in range(1,10)]
print(result)

#
a = [70, 60, 55, 75, 95, 90, 80, 80, 85, 100,99,88,77]
r = 0
count=0
for i in a:
    r = r + i
    count=count+1
r = r/count
print(r)