# 가시성 (Visibility)
# - 객체의 정보 볼 수 있는 레벨을 조절하는 것
# - 누구나 객체 안에 모든 변수를 볼 필요가 없음
#   1) 객체를 사용하는 사용자가 임의로 정보 수정
#   2) 필요 없는 정보에는 접근 할 필요가 없음
#   3) 만약 제품으로 판매한다면? 소스의 보호

class Product(object):
    pass


class Inventory(object):
    def __init__(self):
        self.__items = []  # private으로 접근 제한 선언

    def add_new_item(self, product):
        if type(product) == Product:
            self.__items.append(product)
            print("new item added")
        else:
            raise ValueError("Invalid Item")

    def get_number_of_items(self):
        return len(self.__items)


my_inventory = Inventory()
my_inventory.add_new_item(Product())
my_inventory.add_new_item(Product())
print(my_inventory.get_number_of_items())

# print(my_inventory.__items)        # private으로 선언되어 직접 접근 불가
# my_inventory.add_new_item(object)  # 객체 추가시 Product()객체만 추가 가능하도록 제한
