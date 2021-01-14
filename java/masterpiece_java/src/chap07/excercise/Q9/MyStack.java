package chap07.excercise.Q9;
import java.util.ArrayList;

class MyStack<T> implements IStack<T> {
    ArrayList<T> l = null;

    public MyStack() {
        l = new ArrayList<>();
    }
    @Override
    public T pop() {
        if (l.size() == 0)
            return null;
        else
            return l.remove(0);  // 맨 앞에 있는 아이템 삭제후 값 반환
    }
    @Override
    public boolean push(T obj) {
        l.add(0, obj);  // 맨 끝에 삽입
        return true;
    }
}
