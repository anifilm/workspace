// �ؽ�Ʈ�� ���̳ʸ� �������� ����ü�� ����ü ������ �����
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    char gender;
    int age;
} Friend;

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    FILE* fp;
    Friend myfriend1;
    Friend myfriend2;

    /*   file write   */
    fp = fopen("24-4_3_friend.bin", "wb");
    printf("�̸�, ����, ���� �� �Է�: ");
    scanf("%s %c %d", myfriend1.name, &(myfriend1.gender), &(myfriend1.age));
    fwrite((void*)&myfriend1, sizeof(myfriend1), 1, fp);
    fclose(fp);

    /*   file read   */
    fp = fopen("24-4_3_friend.bin", "rb");
    fread((void*)&myfriend2, sizeof(myfriend2), 1, fp);
    printf("%s %c %d \n", myfriend2.name, myfriend2.gender, myfriend2.age);
    fclose(fp);

    return 0;
}
