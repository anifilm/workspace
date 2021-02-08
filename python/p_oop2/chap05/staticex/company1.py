# 싱글톤(singleton) 구현 방법, Method 1: Method type
class SingletonInstane:
    _instance = None

    @classmethod
    def _get_instance(cls):
        return cls._instance

    @classmethod
    def get_instance(cls, *args, **kargs):
        cls._instance = cls(*args, **kargs)
        cls.instance = cls._get_instance
        return cls._instance


class Company(SingletonInstane):
    pass


def main():
    company1 = Company.get_instance()
    company2 = Company.get_instance()

    print(company1)
    print(company2)


if __name__ == '__main__':
    main()
