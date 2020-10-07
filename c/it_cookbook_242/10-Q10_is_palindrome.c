// 10 회문인지 판단하는 프로그램을 작성하되 아래 재귀 함수를 호출하라. 여기서 first, last는
// 비교 해야 할 요소의 인덱스를 말한다.
// 힌트 첫 문자와 마지막 문자를 비교하여 같으면 ++first, --last에 의해 비교 범위를 줄여서
// 재귀 호출을 하면된다. 베이스 케이스는 두 인덱스가 교차할 때, 즉 first가 last보다 크거나
// 같을 때다.
// int is_palindrome(char s[], int first, int last);
// > Enter input sentence.
// > able was I ere I saw elba ([Enter])
// > Yes, it is a palindrome
#include <stdio.h>

int is_palindrome(char s[], int first, int last) {
    if (first >= last)
        return 1;
    else if (s[first] != s[last])
        return 0;
    else {
        // printf("%c == %c\n", s[first], s[last]);
        return is_palindrome(s, ++first, --last);
    }
}

int main() {

    char ch, strings[100];
    int i, start, end, result;

    printf("Enter a string.\n");
    while ((ch = getchar()) != '\n') {
        strings[i] = ch;
        i++;
    }
    start = 0;
    end = i - 1;

    result = is_palindrome(strings, start, end);

    if (result)
        printf("Yes, it is a palindrome.\n");
    else
        printf("No, it is NOT a palindrome.\n");
    printf("\n");

    return 0;
}
