def calc_bmi(weight, height):
    height = (height * 0.01)
    bmi = weight / (height ** 2)
    print(f"\n당신의 BMI는 {bmi:.2f}입니다.")

    if bmi >= 25.0:
        print("비만\n")
    elif bmi >= 23.0:
        print("과체중\n")
    elif bmi >= 18.5:
        print("정상\n")
    else:
        print("저체중\n")


while True:
    print("키와 몸무게를 입력하세요. (-1 입력시 종료)")
    height = float(input("Height (cm): "))
    if height == -1:
        break
    weight = float(input("Weight (kg): "))
    if weight == -1:
        break
    calc_bmi(weight, height)
