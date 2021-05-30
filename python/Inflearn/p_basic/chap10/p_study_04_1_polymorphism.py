# 다형성 (Polymorphism)
# - 같은 이름 메서드의 내부 로직을 다르게 작성
# - Dynamic Typing 특성으로 인해 파이썬이서는 같으 부모 클래스의 상속에서 주로 발생함

class Animal:
    def __init__(self, name):  # 생성자
        self.name = name

    def take(self):  # 추상 메서드
        raise NotImplementedError("Subclass must implement abstract method")


class Cat(Animal):
    def talk(self):
        return "Meow~"


class Dog(Animal):
    def talk(self):
        return "Woof! Woof!"


animals = [Cat("Missy"),Cat("Mr. Mistoffelees"), Dog("Lassie")]

for animal in animals:
    print(animal.name + ": " + animal.talk())
