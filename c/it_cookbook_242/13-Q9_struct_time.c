// 09 time.h 파일에는 시간 관련 함수가 선언되어 있다. time_t 타입은 경과 시간을 초 단위로
// 표현하기 위해 정의된 int 타입이다. time 함수는 1970년 1월 1일 00:00:00 이후 지금까지
// 경과한 시간을 초 단위로 리턴한다. 따라서 ① 에 의해 그 값이 now에 저장된다. 이제 now를
// 가리키는 포인터를 ② 의 인자로 넘기면 ctime 함수는 현 시점의 요일, 월, 일, 시간, 연도
// 등을 리턴한다.

/*
#include <stdio.h>
#include <time.h>

int main() {

    time_t now;
    char *str;

    now = time(NULL);       // ...①
    str = ctime(&now);      // ...②
    printf("Current time is %s\n", str);

    return 0;
}

time_t time(time_t *ptr);
char* ctime(const time_t *ptr);

*/

// time.h에는 시간 관련 정보를 정의한 구조체인 struct tm 타입도 포함되어 있다. 멤버 변수인
// tm_sec는 분이 바뀐 이후 경과한 초(0 - 59)를, tm_min은 시가 바뀐 이후 경과한 분(0 - 59)
// 을, tm_hour는 자정 이후 경과한 시간(0 - 23)을, tm_mday는 며칠인지(1 - 31)를, tm_mon은
// 1월 이후 경과한 월(0 - 11)을,  tm_year는 1900년 이후 경과한 햇수를, tm_wday은 일요일
// 이후 경과한 일(0 - 6)을, tm_yday는 1월 1일 이후 결과한 일수(0 - 365)를, tm_isdst는
// 써머 타임 적용 여부를 나타낸다.

/*
struct tm {
    int tm_sec;			// Seconds.	     [0-60] (1 leap second)
    int tm_min;			// Minutes.	     [0-59]
    int tm_hour;		// Hours.	     [0-23]
    int tm_mday;		// Day.		     [1-31]
    int tm_mon;			// Month.	     [0-11]
    int tm_year;		// Year	- 1900.
    int tm_wday;		// Day of week.	 [0-6]
    int tm_yday;		// Days in year. [0-365]
    int tm_isdst;		// DST.		     [-1/0/1]
};

struct tm* localtime(const time_t *ptr);
time_t mktime(struct tm *ptr);

*/

// time(NULL)에 의해 리턴 받은 값(70년 이후 현재까지 경과한 초)으로 구조체를 채우려면 예의
// localtime 함수를 호출하면 된다. 역으로, 구조체를 넘기면서 현재까지 경과한 초를 계산하려면
// mktime 함수를 호출하면 된다. 디지털 시계를 시뮬레이션 하기 위한 다음 프로그램을 완성하라.
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {

    struct tm *struct_ptr;

    while (1) {
        system("CLS");                  // 화면 클리어
        time_t now = time(NULL);        // now에 70년 이후 현재까지 경과한 초를 대입
        struct_ptr = localtime(&now);   // now를 가지고 시간 구조체를 채움
        // 구조체 멤버 변수를 써서 HH:MM:SS 형식으로 시간, 분, 초를 출력
        printf("%02d:%02d:%02d\n", struct_ptr->tm_hour, struct_ptr->tm_min, struct_ptr->tm_sec);
        Sleep(1000);                    // 너무 빠른 업데이틀 방지. 1000ms를 대기 S는 대문자
    }

    return 0;
}
