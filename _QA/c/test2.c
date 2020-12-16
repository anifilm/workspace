#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define S_SIZE 50

//����ü�� ���ο� Ÿ�� ����,å�� Ÿ�� ����
typedef struct BOOK {
    int seq;
    int year;	//�⵵ ���� ����
    int lent;
    char title[50];	//å ���� ���� ����
    struct BOOK *link;
}BOOK;


int main(void) {
    BOOK* list = NULL;		//å�� ����Ű�� ������ ����
    BOOK* prev = NULL;
    BOOK* p, *next;
    char buffer[S_SIZE];	//�Է¹��� å ���� ���� ����
    int year;
    int cnt = 0; //������ ���� ���� ���� ����

    system("chcp 949");

    printf("������ ����Ʈ�� �̿��� �������� ���α׷�\n\n");

    //���ᰡ ���õɶ����� �ݺ��� �ݺ��� ����
    while (1) {
        int number = 0;
        //�������� ȭ�鿡 ���
        printf("=====================\n");
        printf("0. �ű� ���\n");
        printf("1. ���� ����\n");
        printf("2. ���� �ݳ�\n");
        printf("3. ��� ���\n");
        printf("4. ����\n");
        printf("=====================\n");
        scanf("%d", &number);
        while (getchar() != '\n');

        //������ ���ڿ� ���� ���� ����
        if (number == 0) {				//�űԵ���϶�
            //��� �� å�� ������ �Է¹ް� �����޸� �Ҵ� �� å ���� ����
            printf("����� å�� ������ �Է��Ͻÿ�: ");
            gets(buffer);
            p = (BOOK*)malloc(sizeof(BOOK));	//���� �޸� �Ҵ�
            strcpy(p->title, buffer);

            //å�� ���� ������ �Է¹޾� ����
            printf("å�� ���� ������ �Է��Ͻÿ�: ");
            gets(buffer);
            year = atoi(buffer);	//buffer�� ���ڿ��� ������ ��ȯ
            p->year = year;			//å�� ������ ����
            p->lent = 0;			//���⿩�� �ʱ�ȭ
            p->seq = cnt; //�Է¹޴� ���� ����

            //������ ���Ḯ��Ʈ�� ���ο� å �߰�
            if (list == NULL)	//���� ����Ʈ�� ��������� ���ο� å�� ù��° å���� ����
                list = p;
            else                //�׿ܿ��� ���� å�� �̾� ����
                prev->link = p;
            p->link = NULL;		//���ο� å�� ��ũ �ʵ带 NULL�� �ʱ�ȭ
            prev = p;
            printf("%s�� ���������� ����Ͽ����ϴ�.\n\n", p->title);
            cnt += 1;			//�Է� ���� ����

            continue;
        }
        else if (number == 1) {		//���� number�� ���� 1�� �Է� �޾��� ��
            p = list;
            if (p == NULL) {    //���� ��� ���θ� �켱 �Ǵ�
                printf("��ϵ� ������ �������� �ʽ��ϴ�.\n");
                printf("������ ���� ����Ͽ� �ֽʽÿ�.\n");
                continue;
            }
            printf("�뿩�� å�� ������ �Է��Ͻÿ�: ");
            gets(buffer);
            while (p != NULL) {			//���Ḯ��Ʈ �ȿ� å ��ȸ
                if (strcmp(p->title, buffer) == 0) {	//��ȸ���� ����� å�� �̸��� �Է¹��� å�� �̸��� ��ġ�ϰ�
                    if (p->lent == 0) {		//���⿩�θ� �ľ��� ������ ���� �ʾ�����
                        printf("%s �� ���⿡ �����Ͽ����ϴ�.\n\n", p->title);	//���⼺�����θ� ȭ�鿡 ǥ���ϰ�
                        p->lent = 1;		//���� ���θ� 1�� �����.
                        break;
                    }
                    else if (p->lent == 1)	//���� ������ �� ���¶��
                        printf("%s �� �̹� �������Դϴ�.\n\n", p->title);	//���� ���θ� ȭ�鿡 ǥ���ϰ�
                    break;													//�ݺ��� �ߴ��Ѵ�.
                }
                else {
                    p = p->link;
                    if (p == NULL) {	//���� ��ȸ�� �����µ� ��ġ�ϴ� ���� ������
                        printf("%s �� �������� �ʽ��ϴ�.\n\n", buffer);	//å�� �������������� ȭ�鿡 ǥ��
                        break;
                    }
                }
            }
            continue;
        }
        else if (number == 2) {				//���� number�� ���� 2�� �Է��� �޾�����
            printf("�ݳ��� å�� ������ �Է��Ͻÿ�: ");
            gets(buffer);
            p = list;
            while (p != NULL) {				//���Ḯ��Ʈ �ȿ� å ��ȸ
                if (strcmp(p->title, buffer) == 0) {	//���� ����� å�� ����� �Է¹��� å�� ������ ��ġ�Ѵٰ�
                    if (p->lent != 1) {		//���⿩�ΰ� 1�� �ƴҶ�
                        printf("%s �� �������� å�� �ƴմϴ�.\n\n", buffer);	//�������� �ƴ϶�� ȭ�鿡 ǥ��
                        break;													//�� �ݺ� �ߴ�
                    }
                    else if (p->lent == 1) {									//���⿩�ΰ� 1�϶�
                        printf("%s �ݳ��� �����Ͽ����ϴ�.\n\n", buffer);		//�ݳ��� �������� ȭ�鿡 ǥ�� ��
                        p->lent = 0;											//���⿩�θ� �ľ��ϴ� �� �� 0���� ����
                        break;
                    }
                }
                else {
                    p = p->link;
                    if (p == NULL) {	//���� ��ȸ�� �����µ� ��ġ�ϴ� ���� ������
                        printf("%s �� �������� �ʽ��ϴ�.\n\n", buffer);	//å�� �������������� ȭ�鿡 ǥ��
                        break;
                    }
                }
            }
            continue;
        }
        else if (number == 3) {						//���� number�� ���� 3���� �Է��� �޾�����
            p = list;
            while (p != NULL) {						//���Ḯ��Ʈ �ȿ� å ��ȸ
                printf("���� %d, ���ǿ��� %d, ���⿩�� %d, ���� %s\n", p->seq, p->year, p->lent, p->title); //ù��° ����� å�� ȭ�鿡 ǥ��
                p = p->link;				//���� ����� å���� �̵�

            }
            printf("\n");
            continue;
        }
        else if (number == 4) {				//���� number�� ���� 4�� �Է��� �޾�����
            p = list;						//���� �Ҵ��� �ݳ�
            while (p != NULL) {
                next = p->link;
                free(p);					//���� �޸� �ݳ�
                p = next;
            }
            printf("�޸𸮸� ��� �ݳ��Ͽ����ϴ�.");		//�޸� �ݳ��Ͽ����� ȭ�鿡 ǥ�� ��
            break;											//���α׷� ����
        }
        else {											//���� ���ڸ� 0,1,2,3,4, �̿��� ���� �Է��Ͽ�����
            printf("�߸� �Է��Ͽ����ϴ�.\n\n");			//�߸��Է��Ͽ����� ȭ�鿡 ���
            continue;

        }
    }
    return 0;
}
