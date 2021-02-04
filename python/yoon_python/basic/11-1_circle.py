""" 11-1 모듈을 만들어 봅시다. """

PI = 3.14  # 원주율

def ar_circle(rad):  # 원의 넓이를 계산해서 반환하는 함수
    return rad * rad * PI

def ci_circle(rad):  # 원의 둘레를 계산해서 반환하는 함수
    return rad * 2 * PI
