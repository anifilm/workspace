#include <stdio.h>
#include "ExpressionTree.h"

int main() {

    char exp[] = "327+*";
    BTreeNode* eTree = MakeExpTree(exp);

    printf("중위 표기법의 수식: ");
    ShowInfixTypeExp(eTree);
    printf("\n");

    printf("연산의 결과: %d\n", EvaluateExpTree(eTree));

    return 0;
}
