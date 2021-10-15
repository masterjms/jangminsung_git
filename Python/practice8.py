#x == y 엑스와 와이가 같다.
#X != y 엑스와 와이가 같지 않다.
#1
a = 1
b = 2
if a < b:
    print("dd")
else:
    print("ss")
#2
money = 2000
if money >= 3000:
    print("택시")
else:
    print("워크")
#3  X of y - 둘중 하나만 참이면 참 / x and y - 둘다 참이면 참
money = 2000
card = 1
if False or False:
    print("택시")
else:
    print("워크")
#if 1 in [1,2,3]: -> 오른쪽 리스트에 1이 있는가?
#if 1 not in [1,2,3] -> 오른쪽 리스트에 1이 없는가?

#4 else if = elif
pocket = ['paper', 'cellphone']
card = True
a = True
if 'money' in pocket:
    print("택시")
elif card:
    print("택시")
elif a:
    print("워크") #순서대로 진행되므로 이거는 결과로 안됌
else:
    prunt("워크")