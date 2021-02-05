""" 13-3 클래스와 객체 이전의 프로그램에 대한 반성 """

# 아빠의 나이를 관리하는 간단한 프로그램

fa_age = 39  # 아빠 나이 정보, 현재 39살

def up_fa_age():   # 이 함수를 호출하면 아빠 나이 올라감
    global fa_age  # 이 함수에서 접근하는 fa_age는 전역변수임을 선언함!
    fa_age += 1    # fa_age의 값 1 증가

def get_fa_age():  # 이 함수를 호출하면 아빠 나이 반환함
    return fa_age  # fa_age의 값 반환

def main():
    print("2019년...")
    print("아빠:", get_fa_age())
    print("2020년...")
    up_fa_age()  # 아빠 나이 1살 증가
    print("아빠:", get_fa_age())

main()
