/*
Q10
다음은 키와 값을 하나의 아이템으로 저장하고 검색 수정이 가능한 추상 클래스가 있다.
  (PairMap 추상 클래스 생략...)

PairMap을 상속받는 Dictionary 클래스를 구현하고, 이를 다음과 같이 활요하는 main() 메서드를 가진 클래스 DictionaryApp도 작성하라.
  (main() 메서드, 실행 결과 생략...)

 */
package chap05.excercise;

abstract class PairMap {
    protected String keyArray[];  // key들을 저장하는 배열
    protected String valueArray[];  // value들을 저장하는 배열
    abstract String get(String key);  // key값을 가진 value반환. 없으면 null 반환
    abstract void put(String key, String value);  // key와 value를 쌍으로 저장. 기존에 key가 있으면, 값을 value로 수정
    abstract String delete(String key);  // key값을 가진 아이템(value와 함께) 삭제. 삭제된 value값 반환
    abstract int length();  // 현재 저장된 아이템의 개수 반환
}

class Dictionary extends PairMap {
    private int size;
    private int idx;

    public Dictionary(int size) {
        keyArray = new String[size];
        valueArray = new String[size];
        this.size = size;
        this.idx = 0;
    }
    @Override
    public String get(String key) {
        for (int i = 0; i < idx; i++) {
            if (key.equals(keyArray[i]))
                return valueArray[i];
        }
        return null;
    }
    @Override
    public void put(String key, String value) {
        for (int i = 0; i < idx; i++) {
            if (key.equals(keyArray[i])) {
                valueArray[i] = value;
                return;
            }
        }
        keyArray[idx] = key;
        valueArray[idx] = value;
        idx++;
    }
    @Override
    public String delete(String key) {
        for (int i = 0; i < idx; i++) {
            if (key.equals(keyArray[i])) {
                String tmp = valueArray[i];
                keyArray[i] = null;
                valueArray[i] = null;
                return tmp;
            }
        }
        return null;
    }
    @Override
    public int length() { return size; }
}

public class Q10_DictionaryApp {
    public static void main(String[] args) {
        Dictionary dic = new Dictionary(10);
        dic.put("황기태", "자바");
        dic.put("이재문", "파이썬");
        dic.put("이재문", "C++");  // 이재문의 값을 C++로 수정
        System.out.println("이재문의 값은 " + dic.get("이재문"));
        System.out.println("황기태의 값은 " + dic.get("황기태"));
        dic.delete("황기태");  // 황기태 아이템 삭제
        System.out.println("황기태의 값은 " + dic.get("황기태"));  // 삭제된 아이템 접근
    }
}

