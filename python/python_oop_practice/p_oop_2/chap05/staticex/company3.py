# 싱글톤(singleton) 구현 방법, Method 3: A base class
class Singleton(object):
  _instance = None
  def __new__(class_, *args, **kwargs):
    if not isinstance(class_._instance, class_):
        class_._instance = object.__new__(class_, *args, **kwargs)
    return class_._instance


class Company(Singleton):
  pass


def main():
    company1 = Company()
    company2 = Company()

    print(company1)
    print(company2)


if __name__ == '__main__':
    main()
