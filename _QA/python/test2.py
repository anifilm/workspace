""" 문제 2 """
def print_num(num):
    count = 1
    for i in range(num):
        for j in range(num):
            print("{:2} ".format(count), end='')
            count += 1
        print()


input_num = int(input())

if 0 < input_num <= 9:
    print_num(input_num)
else:
    print(-1)

"""
문제 1에 비해서 문제 2번의 난이도는 확 낮아지는군요

"""
