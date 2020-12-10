class Node(object): 	# 노드의 형식을 정의하는 부분
	def _ _init_ _(self, data):
		self.data = data
		self.left = self.right = None

class BinarySearchTree(object) :
	def _ _init_ _(self):
		self.root = None

	def insert(self, data): # 이진 트리에 데이터를 넣는 부분
		self.root = self._insert_value(self.root, data)
		return self.root is not None

	def _insert_value(self, node, data) :
		if node is None :
			node = Node(data)
	else :
		if data <= node.data:
			node.left =self._insert_value(node.left, data)
		else :
			node.right = self._insert_value(node.right, data)
	return node

	def find(self, key): # 이진 트리에서 데이터를 찾는 부분
		return self._find_value(self.root, key)

	def _find_value(self, root, key):
		if root is None or root.data ==key:
			return root is not None
		elif key <root.data:
			return self._find_value(root.left, key)
		else :
			return self._find_value(root.right, key)
	def delete(self, key) : # 이진 트리에서 데이터를 지우는 부분
		self.root, deleted = self._delete_value(self.root, key)
		return deleted
	def _delete_value(self, node, key) :
		if node is None :
			return node, False

		deleted=False
		if key == node.data :
			deleted = True
			if node.left and node.right :
				parent, child = node, node.right
				while child.left is not None :
					parent, child = child, child.left
				child.left = node.left
				if parent != node:
					parent.left=child.right
					child.right = node.right
				node = child
			elif node.left or node.right :
				node = node.left or node.right
			else:
				node = None
		elif key < node.data:
			node.left, deleted = self._delete_value(node.left, key)
		else :
			node.right, deleted = self._delete_value(node.right, key)
		return node, deleted

	def DFTravel(self): # 데이터를 출력하는 부분
		def _DFTravel(root):
			if root is None:
				pass
			else :
				print(root.data, end=' ')
				_DFTravel(root.left)
				_DFTravel(root.right)
			_DFTravel(self.root)
		def LFTravel(self): # 데이터를 출력하는 부분
			def _LFTravel(root) :
				if root is None :
					pass
				else:
					_LFTravel(root.left)
					print(root.data, end=' ')
					_LFTravel(root.right)
			_LFTravel(self.root)

	def LRTravel(self): # 데이터를 출력하는 부분
		def _LRTravel(root) :
			if root is None:
				pass
			else :
				_LRTravel(root.left)
				_LRTravel(root.right)
				print(root.data, end=' ')
		_LRTravel(self.root)

	def layerTravel(self): # 데이터를 출력하는 부분
		def _layerTravel(root) :

			queue = [root]
			while queue :
				root = queue.pop(0)
				if root is not None :
					print(root.data, end=' ')
					if root.left :
						queue.append(root.left)
					if root.right:
						queue.append(root.right)
		_layerTravel(self.root)

