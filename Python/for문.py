#for 문 - 하나씩 빼서 반복한다.(in 변수의 리스트를 for i에 하나씩 대입)
test_list = ['one', 'two', 'three']
for i in test_list:      #테스트 리스트에서 하나씩 i에 대입하여 출력한다.
    print(i)
#2
a = [(1,2), (3,4),(5,6)]
for (first, last) in a:
    print(first, last)
#3
score = [90,25,67,70,80]
number = 0
for i in score:
    number = number + 1
    if i >= 60:
        print("%d번 학생은 합격" % number)
    else:
        print("%d번 학생은 불합격" % number)