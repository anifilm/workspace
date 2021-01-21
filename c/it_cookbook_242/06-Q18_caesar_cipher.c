/* 18
씨저 사이퍼(Caesar Cipher)는 암호화 방법 중 하나로서 문자를 몇 칸 건너뛴 나중 문자로 대체하는 방법이다.
예를 들어, 한 칸 나중 문자로 암호화 할 경우 'attack at dawn'은 'buubdl!bu!ebxo'로 암호화 할 수 있다.
아스키코드 표의 a 다음의 문자가 b이며 빈칸 다음 문자가 !이기 때문이다. 이 방법에서는 몇 칸을 건너뛰었는가가
바로 암호를 풀 수 있는 키(Key)라 할 수 있다. 키와 문자열을 입력받아 문자열을 암호화하는 프로그램을 작성해
보라. 단, 아스키코드 문자는 0부터 127 사이에 분포하므로 이 범위를 넘지 않게 하려면 암호화 결과에 모듈로(%)
128을 가해야 한다.
힌트 입력 버퍼에 쌓인 문자를 scanf("%c", &ch); 를 써서 읽되 루프를 돌면서 하나씩 읽어야 한다. '\n'이 들어오면
빠져나가고 그렇지 않으면 암호화된 문자를 출력한다.
  > Enter the key.
  > 3 ([Enter])
  > Enter the text.
  > I like spring. ([Enter])
  > L#olnh#vsulqj1
*/
#include <stdio.h>

int main() {

    char ch;
    int key, value;

    printf("Enter the key.\n");
    scanf("%d", &key);
    rewind(stdin);

    printf("Enter the text.\n");
    while (ch != '\n') {
        scanf("%c", &ch);
        value = ch + key;
        printf("%c", value % 128);
    }
    printf("\n");

    return 0;
}
