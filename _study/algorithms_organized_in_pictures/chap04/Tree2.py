# 데이터의 선언
data = [20,6,8,12,78,32,65,32,7,9]
tree = BinarySearchTree()

# 트리 구조의 완성
for x in data:
	tree.insert(x)

# 트리 안의 데이터 존재에 대한 확인 및 조작
print(tree.find(9))
print(tree.find(3))

print(tree.delete(78))
print(tree.delete(6))
print(tree.delete(11))

# 트리 구조의 데이터 출력
print("\n@@@@@@@")
tree.DFTravel() # 깊이 우선 탐색 중 전위 순회 : 뿌리 > 왼쪽 트리 > 오른쪽 트리
print("\n=====")
tree.LFTravel() # 깊이 우선 탐색 중 중위 순회 : 왼쪽 트리 > 뿌리 > 오른쪽 트리
print("\n*****")
tree.LRTravel() # 깊이 우선 탐색 중 후위 순회 : 왼쪽 트리 > 오른쪽 트리 > 뿌리 노드
print("\n&&&&&")
tree.layerTravel() # 너비 우선 탐색 : 뿌리 노드부터 깊이순으로 방문
