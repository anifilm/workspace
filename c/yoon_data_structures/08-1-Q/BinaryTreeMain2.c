#include <stdio.h>
#include "BinaryTree2.h"

void ShowIntData(int data);

int main() {

    BTreeNode* bt1 = MakeBTreeNode();  // 노드 bt1 생성
    BTreeNode* bt2 = MakeBTreeNode();  // 노드 bt2 생성
    BTreeNode* bt3 = MakeBTreeNode();  // 노드 bt3 생성
    BTreeNode* bt4 = MakeBTreeNode();  // 노드 bt4 생성
    BTreeNode* bt5 = MakeBTreeNode();  // 노드 bt5 생성
    BTreeNode* bt6 = MakeBTreeNode();  // 노드 bt6 생성

    SetData(bt1, 1);  // bt1에 1저장
    SetData(bt2, 2);  // bt2에 2저장
    SetData(bt3, 3);  // bt3에 3저장
    SetData(bt4, 4);  // bt4에 4저장
    SetData(bt5, 5);  // bt5에 5저장
    SetData(bt6, 6);  // bt6에 6저장

    MakeLeftSubTree(bt1, bt2);   // bt2를 bt1의 왼쪽 자식 노드로
    MakeRightSubTree(bt1, bt3);  // bt3를 bt1의 오른쪽 자식 노드로
    MakeLeftSubTree(bt2, bt4);   // bt4를 bt2의 왼쪽 자식 노드로
    MakeRightSubTree(bt2, bt5);  // bt5를 bt2의 오른쪽 자식 노드로
    MakeRightSubTree(bt3, bt6);  // bt6를 bt3의 오른쪽 자식 노드로

    // PreorderTraverse(bt1, ShowIntData);
    // printf("\n");
    // InorderTraverse(bt1, ShowIntData);
    // printf("\n");
    // PostorderTraverse(bt1, ShowIntData);
    // printf("\n");

    DeleteTree(bt1);
    return 0;
}

void ShowIntData(int data) {
    printf("%d ", data);
}
