# 상속 (Inheritance)
# - 부모 클래스로 부터 속성과 Method를 물려받은 자식 클래스를 생성하는 것

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age


class Korean(Person):
    pass


first_korean = Korean("Sungchul", 35)
print(first_korean.name)
