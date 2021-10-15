#1 while문
treehit = 0
while treehit < 10:
    treehit = treehit + 1
    print("나무를 %d번 찍음" % treehit)
    if treehit == 10:
        print("나무 넘어감")
#2
coffee = 10
money = 300
while money:
    print("돈을 받았으니 커피를 줍니다.")
    coffee = coffee - 1
    print("커피가 %d개 남았습니다." % coffee )
    if not coffee:
        print("커피가 없습니다.")
        break
#3
a = 0
while a < 10:
    a = a+1
    if a %2 == 0:   # a%2 ->a를 2로 나눈 나머지가 0인가 = 짝수인가
        continue
    print(a)

#4
a = 0
r=0
while a <= 1000:
    a = a + 1
    if a %3 == 0:
        r+=a
print(r)