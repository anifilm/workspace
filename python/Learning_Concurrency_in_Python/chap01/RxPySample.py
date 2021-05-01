# 반응형 프로그래밍, ReactiveX(RxPY)
import rx
from rx import operators as ops

# on_next 메서드, on_error 메서드, on_completed 메서드가 있는 사용자 옵저버 정의
class temperatureObserver():
    # 온도값을 읽을 때마다 해당 메서드 호출
    def on_next(self, x):
        print('Temperature is: %s degrees centigrade' % x)
        if (x > 6):
            print('Warning: Temperate Is Exceeding Recommended Limit')
        if (x == 9):
            print('DataCenter is shutting down. Temperature is too high')

    # 에러 메시지를 받으면, 이 부분에서 핸들링
    def on_error(self, e):
        print('Error: %s' % e)

    # 스트림이 종료됐을 때 호출
    def on_completed(self):
        print('All Temps Read')

# 가상의 온도값 생성
xs = rx.from_iterable(range(10))
# 해당 온도값 전달
d = xs.subscribe(temperatureObserver())
