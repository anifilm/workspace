/* 이론 문제
Q3
다음 클래스 Sample에서 클래스 SampleManager의 모든 멤버 함수를 프렌드로 초대하도록
선언하라.
*/
#include <iostream>

class Sample;

class SampleManager {
public:
    bool compare(Sample &a, Sample &b);
};

class Sample {
public:
    friend SampleManager;
};
