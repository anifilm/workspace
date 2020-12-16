// 구조체의 정의는 어디에 둘까요? 그런데 중복은 안됩니다.
typedef struct div {
    int quotient;   // 몫
    int remainder;  // 나머지
} Div;

Div IntDiv(int num1, int num2) {
    Div dval;
    dval.quotient = num1 / num2;
    dval.remainder = num1 % num2;
    return dval;
}
