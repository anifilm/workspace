// 자바로 구현한 이진 트리 프로그램
public class TreeNode {
    private int itsKey;
    private Object itsValue;
    private TreeNode nodes[] = new TreeNode[2];

    public TreeNode(int key, Object value) {
        itsKey = key;
        itsValue = value;
        System.out.println("start TreMapNode");
    }

    public Object find(int key) {
        if (key == itsKey) {
            return itsValue;
        }
        return findSub(selectSubNode(key), key);
    }

    private int selectSubNode(int key) {
        return (key < itsKey) ? 0 : 1;
    }

    private Object findSub(int node, int key) {
        return nodes[node] == null ? null : nodes[node].find(key);
    }

    public void add(int key, Object value) {
        if (key == itsKey)
            itsValue = value;
        else
            SubNode(selectSubNode(key), key, value);
    }

    private void SubNode(int node, int key, Object value) {
        if (nodes[node] == null)
            nodes[node] = new TreeNode(key, value);
        else
            nodes[node].add(key, value);
    }
}
