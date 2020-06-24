# Chapter06-01
# 병행성 (Concurrency)
# 이터레이터, 제네레이터
# Iterator, Generator

# 파이선 반복 가능한 타입
# for, collections, text file, List, Dict, Set, Tuple, unpacking, *args... : iterable

# next 사용 패턴
class WordSplitter:
    def __init__(self, text):
        self._idx = 0
        self._text = text.split(' ')

    def __next__(self):
        # print('Called __next__')
        try:
            word = self._text[self._idx]
        except IndexError:
            raise StopIteration('Stop Iteration.')
        self._idx += 1
        return word

    def __repr__(self):
        return 'WordSplit(%s)' % (self._text)

wi = WordSplitter('Do today what you could do tomorrow')

print(wi)
print(next(wi))
print(next(wi))
print(next(wi))
print(next(wi))
print(next(wi))
print(next(wi))
print(next(wi))
# print(next(wi))
