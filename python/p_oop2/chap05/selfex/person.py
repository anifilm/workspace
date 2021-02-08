class Person:
    def __init__(self, name = "이름 없음", age = 1):
        self.name = name
        self.age = age

    def get_self(self):
        return self

    def show_info(self):
        print(self.name + ", " + str(self.age))


def main():
    person_noname = Person()
    person_noname.show_info()

    person_lee = Person("Lee", 20)
    person_lee.show_info()

    print(person_lee)

    p = person_lee.get_self()
    print(p)


if __name__ == '__main__':
    main()
