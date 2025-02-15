"""
Q3 리스트의 더하기와 extend 함수

다음과 같은 리스트 a가 있다.

>>> a = [1, 2, 3]

리스트 a에 [4, 5]를 + 기호를 사용하여 더한 결과는 다음과 같다.

>>> a = [1, 2, 3]
>>> a = a + [4, 5]
>>> a
[1, 2, 3, 4, 5]

리스트 a에 [4, 5]를 extend를 사용하여 더한 결과는 다음과 같다.

>>> a = [1, 2, 3]
>>> a.extend([4, 5])
>>> a
[1, 2, 3, 4, 5]

+ 기호를 사용하여 더한 것과 extend한 것의 차이점이 있을까? 있다면 그 차이점을 설명하시오.


extend() 를 사용하는 경우 a 변수의 메모리 주소에 대한 참조 값는 변하지 않는다.

+ 연산을 사용하는 경우 a 변수에 있는 리스트에 [4, 5]를 더하여 새로운 리스트를 변수에 재할당
하게 되므로 참조되는 메모리의 주소 값이 변경된다.

"""
