#변수는 객체를 가리킴
#a = [1,2,3]
#b = a
#a[1] = 4
#print(b)
#print(a)

#리스트에서 a와b는 주소를 공유하기 때문에 이를 분류하기 위해 a[:] 또는 copy(a)로 변경
a = [1,2,3]
b = a[:]
#또는 b = copy(a)
a[1] = 5
print(a)
print(b)
