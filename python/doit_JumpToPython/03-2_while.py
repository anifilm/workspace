""" 03-2 while문 """

treeHit = 0  # 나무를 찍은 횟수
while treeHit < 10:  # 나무를 찍은 횟수가 10보다 작은 동안 반복
    treeHit += 1     # 나무를 찍은 횟수 1씩 증가
    print("나무를 %d번 찍었습니다." % treeHit)
    if treeHit == 10:  # 나무를 열 번 찍으면
        print("나무 넘어갑니다.")


""" while문 만들기 """

prompt = """
1. Add
2. Del
3. List
4. Quit

Enter number: """

number = 0  # 번호를 입력받을 변수
while number != 4:  # 입력받은 번호가 4가 아닌 동안 반복
    print(prompt)
    number = int(input())


""" while문 강제로 빠져나가기 """

coffee = 10  # 자판기에 커피가 10개 있다.
money = 300  # 자판기에 넣을 돈은 300원이다.
while money:
    print("돈을 받았으니 커피를 줍니다.")
    coffee -= 1  # while문을 한번 돌 때 커피가 하나 줄어든다.
    print("남은 커피의 양은 %d개입니다." % coffee)
    if coffee == 0:
        print("커피가 다 떨어졌습니다. 판매를 중지합니다.")
        break


""" while문의 맨 처음으로 돌아가기 """

a = 0
while a < 10:
    a += 1
    if a % 2 == 0: continue  # a가 짝수이면 맨 처음으로 돌아간다.
    print(a)


""" 무한 루프 """
while True:
    print("Ctrl+C를 눌러야 while문을 빠져나갈 수 있습니다.")
