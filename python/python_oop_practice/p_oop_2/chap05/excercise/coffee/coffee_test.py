from person import Person
from star_coffee import StarCoffee
from bean_coffee import BeanCoffee
from menu import Menu


def main():
    kim = Person("Kim", 10000)
    lee = Person("Lee", 10000)

    star_coffee = StarCoffee()
    bean_coffee = BeanCoffee()

    kim.buy_star_coffee(star_coffee, Menu.STARAMERICANO)
    lee.buy_bean_coffee(bean_coffee, Menu.BEANLATTE)


if __name__ == '__main__':
    main()
