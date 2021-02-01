# -*- coding: utf-8 -*-
def input_celsius_value():
    return float(input("변환하고 싶은 섭씨 온도를 입력해 주세요 : "))

def convert_celsius_fahrenheit(celsius_value):
    return float(((9/5) * celsius_value) + 32)

def print_fahrenheit_value(celsius_value, fahrenheit_value):
    print("섭씨온도 :", celsius_value)
    print("화씨온도 :", fahrenheit_value)

def main():
    print("본 프로그램은 섭씨를 화씨로로 변환해주는 프로그램입니다")
    print("============================")
    # ===Modify codes below=================

    celcius = input_celsius_value()
    fahrenheit = convert_celsius_fahrenheit(celcius)
    print_fahrenheit_value(celcius, fahrenheit)

    # ======================================
    print("===========================")
    print("프로그램이 종료 되었습니다.")


if __name__ == '__main__':
    main()
