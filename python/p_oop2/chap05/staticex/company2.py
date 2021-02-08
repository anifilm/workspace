# 싱글톤(singleton) 구현 방법, Method 2: A decorator
def singleton(class_):
    instances = {}
    def getinstance(*args, **kwargs):
        if class_ not in instances:
            instances[class_] = class_(*args, **kwargs)
        return instances[class_]
    return getinstance


@singleton
class Company():
    pass


def main():
    company1 = Company()
    company2 = Company()

    print(company1)
    print(company2)


if __name__ == '__main__':
    main()
