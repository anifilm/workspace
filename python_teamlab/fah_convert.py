print("본 프로그램은 섭씨를 화씨로 변환해주는 프로그램 입니다.")
print("변환하고 싶은 섭씨 온도를 입력해주세요 :")

user_input = input()

fah = ((9/5) * float(user_input)) + 32

print("섭씨 온도 :", user_input)
print("화씨 온도 :", fah)
