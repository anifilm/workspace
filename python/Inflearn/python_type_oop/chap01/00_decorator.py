# 데코레이터(decorator) 패턴 기본


def copyright(func):
    def new_func():
        print("Copyright 2021. Anifilm Co. all rights reserved.")
        func()

    return new_func


@copyright
def smile():
    print("😄")


@copyright
def angry():
    print("😡")


@copyright
def love():
    print("😍")


smile()
angry()
love()
