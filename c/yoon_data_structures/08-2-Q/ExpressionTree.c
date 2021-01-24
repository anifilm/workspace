// 후위 표기법의 수식을 기반으로 수식 트리 구성하기
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "BinaryTree2.h"

BTreeNode* MakeExpTree(char exp[]) {  // 수식 트리 구성
    Stack stack;
    BTreeNode* pnode;

    int expLen = strlen(exp);
    int i;

    StackInit(&stack);

    for (i = 0; i < expLen; i++) {
        pnode = MakeBTreeNode();

        if (isdigit(exp[i]))  // 피연산자라면,
            SetData(pnode, exp[i] - '0');  // 문자를 정수로 바꿔서 저장
        else {  // 연산자라면,
            MakeRightSubTree(pnode, SPop(&stack));
            MakeLeftSubTree(pnode, SPop(&stack));
            SetData(pnode, exp[i]);
        }
        SPush(&stack, pnode);
    }

    return SPop(&stack);
}

int EvaluateExpTree(BTreeNode* bt) {  // 수식 트리 계산
    int op1, op2;

    if (GetLeftSubTree(bt) == NULL && GetRightSubTree(bt) == NULL)  // 단말 노드라면
        return GetData(bt);

    op1 = EvaluateExpTree(GetLeftSubTree(bt));   // 왼쪽 서브 트리 계산
    op2 = EvaluateExpTree(GetRightSubTree(bt));  // 오른쪽 서브 트리 계산

    switch(GetData(bt)) {  // 연산자를 확인하여 연산을 진행
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
    }
    return 0;
}

void ShowNodeData(int data) {
    if (0 <= data && data <= 9)
        printf("%d ", data);
    else
        printf("%c ", data);
}

void ShowPrefixTypeExp(BTreeNode* bt) {  // 전위 표기법 기반 출력
    PreorderTraverse(bt, ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode* bt) {   // 중위 표기법 기반 출력
    if (bt == NULL)
        return;

    if (bt->left != NULL || bt->right != NULL)
        printf("( ");

    ShowInfixTypeExp(bt->left);   // 첫 번째 피연산자 출력
    ShowNodeData(bt->data);       // 연산자 출력
    ShowInfixTypeExp(bt->right);  // 두 번째 피연산자 출력

    if (bt->left != NULL || bt->right != NULL)
        printf(") ");
}

void ShowPostfixTypeExp(BTreeNode* bt) {  // 후위 표기법 기반 출력
    PostorderTraverse(bt, ShowNodeData);
}
