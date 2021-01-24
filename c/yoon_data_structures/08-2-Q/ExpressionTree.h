// 수식 트리의 구현에 필요한 도구와 헤더파일의 정의
#ifndef __EXPRESSION_TREE_H__
#define __EXPRESSION_TREE_H__
#include "BinaryTree2.h"

BTreeNode* MakeExpTree(char exp[]);  // 수식 트리 구성
int EvaluateExpTree(BTreeNode* bt);  // 수식 트리 계산

void ShowNodeData(int data);

void ShowPrefixTypeExp(BTreeNode* bt);   // 전위 표기법 기반 출력
void ShowInfixTypeExp(BTreeNode* bt);    // 중위 표기법 기반 출력
void ShowPostfixTypeExp(BTreeNode* bt);  // 후위 표기법 기반 출력

#endif
