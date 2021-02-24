""" relative 패키지 """

from game.sound.echo import echo_test

def render_test():
    print("render")
    echo_test()

"""
위 예제처럼 from game.sound.echo import echo_test 를 입력해 전체 경로를 사용하여
import 할 수도 있지만 다음과 같이 relative하게 import하는 것도 가능하다.

from ..sound.echo import echo_test

"""
