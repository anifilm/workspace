#include <stdlib.h>
#include "BinaryTree2.h"

BTreeNode* MakeBTreeNode() {  // 이진 트리 노드를 생성하여 그 주소 값을 반환
    BTreeNode* nd = (BTreeNode*)malloc(sizeof(BTreeNode));
    nd->left = NULL;
    nd->right = NULL;
    return nd;
}

BTData GetData(BTreeNode* bt) {  // 노드에 저장된 데이터를 반환
    return bt->data;
}

void SetData(BTreeNode* bt, BTData data) {  // 노드에 데이터를 저장. data로 전달된 값을 저장
    bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt) {  // 왼쪽 서브 트리의 주소 값을 반환
    return bt->left;
}

BTreeNode* GetRightSubTree(BTreeNode* bt) {  // 오른쪽 서브 트리의 주소 값을 반환
    return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {  // 왼쪽 서브 트리를 연결
    if (main->left != NULL)  // 왼쪽 서브 트리가 존재한다면, 해당 트리를 삭제하고 새로운 왼쪽 서브 트리를 연결
        free(main->left);
    main->left = sub;
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {  // 오른쪽 서브 트리를 연결
    if (main->right != NULL)  // 오른쪽 서브 트리가 존재한다면, 해당 트리를 삭제하고 새로운 오른쪽 서브 트리를 연결
        free(main->right);
    main->right = sub;
}

void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action) {  // 이진 트리 전체를 전위 순회
    if (bt == NULL)
        return;
    action(bt->data);
    PreorderTraverse(bt->left, action);
    PreorderTraverse(bt->right, action);
}

void InorderTraverse(BTreeNode* bt, VisitFuncPtr action) {  // 이진 트리 전체를 중위 순회
    if (bt == NULL)
        return;
    InorderTraverse(bt->left, action);
    action(bt->data);
    InorderTraverse(bt->right, action);
}

void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action) {  // 이진 트리 전체를 후위 순회
    if (bt == NULL)
        return;
    PostorderTraverse(bt->left, action);
    PostorderTraverse(bt->right, action);
    action(bt->data);
}
