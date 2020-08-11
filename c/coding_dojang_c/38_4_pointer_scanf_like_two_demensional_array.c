#include <stdio.h>
#include <stdlib.h>     // malloc, free �Լ��� ����� ��� ����

int main() {

    int row, col;

    printf("2���� �迭�� ũ�⸦ �Է��ϼ���: (ex >> 3 4) >> ");
    scanf("%d %d", &row, &col);
    printf("\n");

    int **numPtr2 = malloc(sizeof(int *) * row);      // ���� �����Ϳ� (int ������ ũ�� * row(����ũ��)) ��ŭ ���� �޸� �Ҵ�
                                                      // �迭�� ����
    for (int i = 0; i < row; i++) {                   // ���� ũ�⸸ŭ �ݺ�
        numPtr2[i] = malloc(sizeof(int) * col);       // (int ũ�� * col(���� ũ��)) ��ŭ ���� �޸� �Ҵ�
    }                                                 // �迭�� ����

    for (int i = 0; i < row; i++) {         // ���� ũ�⸸ŭ �ݺ�
        for (int j = 0; j < col; j++) {     // ���� ũ�⸸ŭ �ݺ�
            numPtr2[i][j] = i + j;          // 2���� �迭�� �� ��ҿ� i + j ���� �Ҵ�
        }
    }

    for (int i = 0; i < row; i++) {         // ���� ũ�⸸ŭ �ݺ�
        for (int j = 0; j < col; j++) {     // ���� ũ�⸸ŭ �ݺ�
            printf("numPtr2[%d][%d]: %d \t", i, j, numPtr2[i][j]); // 2���� �迭�� �ε����� �ݺ����� ���� i, j �� ����
        }
        printf("\n");       // ���� ��Ҹ� ����� �� ���� �ٷ� �Ѿ
    }

    for (int i = 0; i < 3; i++) {       // ���� ũ�⸸ŭ �ݺ�
        free(numPtr2[i]);               // 2���� �迭�� ���� ���� �޸� ����
    }

    free(numPtr2);       // 2���� �迭�� ���� ���� �޸� ����

    return 0;
}
