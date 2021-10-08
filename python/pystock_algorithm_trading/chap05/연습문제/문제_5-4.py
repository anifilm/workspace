def print_bmi(weight, height):
    height = (height * 0.01)
    bmi = weight / (height ** 2)
    print(f"당신의 BMI는 {bmi:.2f}입니다.")

    if bmi >= 25.0:
        print("비만")
    elif bmi >= 23.0:
        print("과체중")
    elif bmi >= 18.5:
        print("정상")
    else:
        print("저체중")


print_bmi(72.0, 169.8)
