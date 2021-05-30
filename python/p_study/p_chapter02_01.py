# Chapter02-01
# 객체 지향 프로그래밍(OOP) -> 코드의 재사용, 코드 중복 방지, 유지보수, 대형프로젝트
# 규모가 큰 프로젝트(프로그램) -> 함수 중심 -> 데이터 방대 -> 복잡
# 클래스 중심 -> 데이터 중심 -> 객체로 관리

# 일반적인 코딩
# 차량1
car_company_1 = 'Ferrari'
car_detail_1 = [
    {'color': 'white'},
    {'horsepower': 400},
    {'price': 8000}
]

# 차량2
car_company_2 = 'BMW'
car_detail_2 = [
    {'color': 'black'},
    {'horsepower': 270},
    {'price': 5000}
]

# 차량3
car_company_3 = 'Audi'
car_detail_3 = [
    {'color': 'silver'},
    {'horsepower': 300},
    {'price': 6000}
]

# 리스트 구조
# 관리 불편, 인덱스 접근시 실수 가능성, 삭제 불편
car_company_list = ['Ferrari', 'BMW', 'Audi']
car_detail_list = [
    {'color': 'white', 'horsepower': 400, 'price': 8000},
    {'color': 'black', 'horsepower': 270, 'price': 5000},
    {'color': 'silver', 'horsepower': 300, 'price': 6000}
]

del car_company_list[1]
del car_detail_list[1]

print(car_company_list)
print(car_detail_list)
print()

# 딕셔너리 구조
# 코드 반복 지속, 중첩 문제(키), 키 조회 예외 처리 등
car_dicts = [
    {'car_campany': 'Farrari', 'car_detail': {'color': 'white', 'horsepower': 400, 'price': 8000}},
    {'car_campany': 'BMW', 'car_detail': {'color': 'black', 'horsepower': 270, 'price': 5000}},
    {'car_campany': 'Audi', 'car_detail': {'color': 'silver', 'horsepower': 300, 'price': 6000}}
]

#pop(key, 'default')
del car_dicts[1]
print(car_dicts)
print()

# 클래스 구조
# 구조 설계 후 재사용성 증가, 코드 반복 최소화, 메소드 활용
class Car():
    def __init__(self, company, details):
        self._company = company
        self._details = details

    def __str__(self):
        return 'str : {} - {}'.format(self._company, self._details)

    def __repr__(self):
        return 'repr : {} - {}'.format(self._company, self._details)

    def __reduce__(self):
        pass

car1 = Car('Ferrari', {'color': 'white', 'horsepower': 400, 'price': 8000})
car2 = Car('BMW', {'color': 'black', 'horsepower': 270, 'price': 5000})
car3 = Car('Audi', {'color': 'silver', 'horsepower': 300, 'price': 6000})

print(car1)
print(car2)
print(car3)

print(car1.__dict__)
print(car2.__dict__)
print(car3.__dict__)

#print(dir(car1)) # 인스턴스 객체 car1의 모든 메타 정보를 출력
print()

# 리스트 선언
car_list = []
car_list.append(car1)
car_list.append(car2)
car_list.append(car3)

print(car_list)
print()

# 반복(__str__)
for x in car_list:
    print(x)
    #print(repr(x))
