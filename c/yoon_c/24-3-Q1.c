/* 문제 24-1 [문자열 방식의 데이터 입출력]
문제 1
프로그램상에서 myinfo.txt라는 이름의 파일을 생성해서 본인의 이름, 주민번호, 전화번호를
저장하는 프로그램을 작성하자. 단, 저장의 형태는 다음과 같아야 한다. (# 문자도 함께 저장
되어야 한다.)
  #이름: 임채영
  #주민번호: 780918-12345678
  #전화번호: 010-8731-2354

그리고 저장이 완료되면 메모장으로 확인이 가능해야 한다.
*/
#include <stdio.h>

int main() {

    FILE* fp = fopen("24-3-Q_myinfo.txt", "wt");  // 쓰기 모드로 파일 스트림 (출력)을 생성
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;  // 비정상적 종료를 의미하기 위해서 -1을 반환
    }

    fputs("#이름: 임채영\n", fp);
    fputs("#주민번호: 780918-12345678\n", fp);
    fputs("#전화번호: 010-8731-2354\n", fp);

    fclose(fp); // 스트림의 종료, 실제 파일쓰기를 하는 시점
    puts("파일 쓰기를 완료하였습니다.");

    return 0;
}
