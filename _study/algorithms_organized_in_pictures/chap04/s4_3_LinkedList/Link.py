# 연결 리스트(Linked List) 자료구조
class Node:     # 연결 리스트를 구성하는 단위 데이터의 모습은 data + 다음 데이터
    def __init__(self, data, next=None):
        self.data = data
        self.next = next

def init():     # 연결 리스트를 생성한다. node1 ~ node4 그리고 연결 포인터 구성
    global node1
    node1 = Node(1)
    node2 = Node(2)
    node3 = Node(3)
    node4 = Node(4)
    node1.next = node2
    node2.next = node3
    node3.next = node4

def delete(del_data):   # 구성된 리스트에서 데이터를 지우고, 나머지를 연결한다.
    global node1
    pre_node = node1
    next_node = pre_node.next

    if pre_node.data == del_data:
        node1 = next_node
        del pre_node
        return

    while next_node:
        if next_node.data == del_data:
            pre_node.next = next_node.next
            del next_node
            break
        pre_node = next_node
        next_node = next_node.next

def insert(ins_data):   # 연결 리스트에 데이터를 추가한다.
    global node1
    new_node = Node(ins_data)
    new_node.next = node1
    node1 = new_node

def print_list():       # 연결 리스트의 데이터를 출력한다.
    global node1
    node = node1
    while node:
        print(node.data)
        node = node.next
    print()

def LinkedList():
    init()
    print_list()
    delete(2)
    insert("9")
    print_list()


LinkedList()    # LinkedList를 수행하라.
