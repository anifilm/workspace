// 자바로 구현한 이진 트리 프로그램
public class Tree {
    TreeNode topNode = null;

    public void add(int key, Object value) {
        if (topNode == null)
            topNode = new TreeNode(key, value);
        else
            topNode.add(key, value);
        }

    public Object get(int key) {
        return topNode == null ? null : topNode.find(key);
    }
}
