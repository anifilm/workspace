/* 이론 문제
Q4
클래스 SampleManager에는 다음의 멤버 함수가 있다.
*/
#include <iostream>

class Sample;

class SampleManager {
public:
    bool compare(Sample &a, Sample &b);
};

class Sample {
public:
    friend bool SampleManager::compare(Sample &a, Sample &b);
};
