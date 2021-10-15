#for 반복문
#keys는 1,2,3 / values는 alpa,bata,seta / items는 키랑 벨류 둘다
#1
a = {1: 'alpa', 2: 'beta', 3: 'seta'}
for v,k in a.items():
 print("키는 : " + str(v))
 print("벨류는 : " + k)
#2
a = {1: "minsung", 2: "minho", 3: "jun"}
for v,k in a.items():
    print("번호 : " + str(v))
    print("이름 : " + k)
 