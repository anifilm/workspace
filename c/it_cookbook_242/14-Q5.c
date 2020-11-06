// 05 입력 문자열을 암호화하여 2진 파일인 encrypt.bin 파일을 작성하라. 단, 암호화 방식은
// 씨저 사이퍼(Caesar Cipher)를 사용하되 암호 키만큼 건너뛰어야 한다. 이후 encrypt.bin
// 파일을 읽은 뒤 그것을 복원(decryption)하여 화면에 출력하라. 또, 복원된 내용이 원래
// 입력한 내용과 같은지를 확인하라.
#include <stdio.h>
#include <stdlib.h>

int main() {

    char ch;
    int key, count;

    FILE* fp = fopen("14-Q5_encrypt.bin", "w+b");   // encrypt.bin 파일. 쓰고 읽기 모드
    if (fp == NULL) {                               // 널 테스트
        fprintf(stderr, "Error opening file.\n");   // fprintf(stderr) 오류 메시지
        exit(1);                                    // 종료
    }

    printf("Enter key.\n");
    scanf("%d", &key);                              // key 값을 입력받음
    while (getchar() != '\n');                      // 입력 버퍼 클리어

    printf("Enter texts to encrypt.\n");
    while ((ch = getchar()) != '\n') {              // '\n'이 아닐 때까지
        ch = (ch + key) % 128;                      // 아스키 범위를 벗어나면 wrap around
        count = fwrite((void *)&ch, sizeof(char), 1, fp);       // 2진 파일로 쓰기
        if (count < 1) {                                        // count가 1보다 작으면
            fprintf(stderr, "Error writing a character.\n");    // 오류 메시지 출력
            exit(1);
        }
    }

    fseek(fp, 0, SEEK_SET);                         // 읽기 모드를 위해 위치 포인터를 파일 처음으로 되돌림
    while ((ch = fgetc(fp)) != EOF) {               // 2진 파일 읽기. ch로 읽어들임
        ch = ch - key;                              // 원래 문자 복권
        if (ch < 0)                                 // 아스키 범위를 벗어나면 wrap around
            ch += 128;
        printf("%c", ch);                           // ch를 화면에 출력
    }

    if (!feof(fp)) {                                // 파일 끝이 아니면 오류 메시지
        printf("Error reading character.\n");
        exit(1);
    }

    fclose(fp);                                     // 파일 닫기
    return 0;
}
