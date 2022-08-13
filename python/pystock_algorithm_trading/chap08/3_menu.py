def print_menu():
    print("1. 연락처 입력")
    print("2. 연락처 출력")
    print("3. 연락처 삭제")
    print("4. 종료")
    menu = input("메뉴 선택: ")
    return int(menu)


def run():
    while 1:
        menu = print_menu()
        if menu == 4:
            break
        print()


if __name__ == "__main__":
    run()
