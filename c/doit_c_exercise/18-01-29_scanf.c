// scanf 함수 만들어 보기
#include <stdio.h>

int my_scanf(const char *ap_format, void *ap_data) {
    int temp_char, num = 0, flag;


}

int main() {

    char c_data;
    short h_data;
    int i_data;

    my_scanf("%c", &c_data);
    my_scanf("%h", &h_data);
    my_scanf("%d", &d_data);

    printf("[input]: %c, %hd, %d\n", c_data, h_data, i_data);

	return 0;
}
