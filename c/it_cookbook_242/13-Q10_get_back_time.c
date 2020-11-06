// 10 현재 시간을 출력한 후 몇 년, 몇 개월의 시간을 되돌리고 싶은지를 입력받아 새로운 시간을
// 출력하라.
// 힌트 일단 현재 시간을 출력한다. 이후 time 함수의 리턴 값을 인자로 해서 localtime 함수를
// 호출하고 그 리턴 값으로 struct tm 타입의 시간 구조체를 채울 수 있다. 이 구조체의 tm_year
// 와 mt_month 값을 조정한 후에 mktime 함수를 호출하여 초 단위로 바꾸면 다시 ctime 함수를
// 써서 새로운 시간을 출력할 수 있다.
// > Current time is Sun Oct 11 19:17:46 2020
// > Enter number of years and months you wont to get back.
// > 10 14 ([Enter])
// > Now your time is
#include <stdio.h>
#include <time.h>

int main() {

    time_t now, your_time;
    char* str;
    int my_year, my_month;
    struct tm *struct_ptr;

    now = time(NULL);
    str = ctime(&now);
    printf("Current time is %s\n", str);

    printf("Enter number of years and months you wont to get back.\n");
    scanf("%d %d", &my_year, &my_month);

    struct_ptr = localtime(&now);
    struct_ptr->tm_year -= my_year;
    struct_ptr->tm_mon -= my_month;

    your_time = mktime(struct_ptr);

    str = ctime(&your_time);
    printf("\nNow your time is %s\n", str);

    return 0;
}
