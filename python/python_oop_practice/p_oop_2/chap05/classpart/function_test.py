def add_num(num1, num2):
    result = num1 + num2
    return result

def say_hello(greeting):
    print(greeting)

def calc_sum():
    sum = 0
    for i in range(101):
        sum += i
    return sum

def main():
    n1 = 10
    n2 = 20

    total = add_num(n1, n2)
    print(total)

    say_hello("안녕하세요")

    num = calc_sum();
    print(num)


if __name__ == '__main__':
    main()
