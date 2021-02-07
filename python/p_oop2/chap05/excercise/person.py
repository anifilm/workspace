class Person:
    # 멤버변수 선언
    age = None
    name = None
    is_married = None
    number_of_children = None


def main():
    person = Person()
    person.age = 40
    person.name = "James"
    person.is_married = True
    person.number_of_children = 3

    print("나이:", person.age)
    print("이름:", person.name)
    print("결혼 여부:", person.is_married)
    print("자녀 수:", person.number_of_children)


if __name__ == '__main__':
    main()
