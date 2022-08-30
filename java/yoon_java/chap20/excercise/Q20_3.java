/* 문제 20-3 [탐색의 기준 변경]
앞서 제시한 예제 ArrayObjShearch.java에서 탐색의 기준은 나이였다. 그런데 이 탐색의 기준이 이름이 되도록 예제를 수정해 보자.
 */
import java.util.Arrays;

class Person implements Comparable {
    private String name;
    private int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public int compareTo(Object obj) {
        Person p = (Person) obj;
        return this.name.compareTo(p.name); // 이름을 비교
    }

    @Override
    public String toString() {
        return name + ": " + age;
    }
}

class Q20_3 {
    public static void main(String[] args) {
        Person[] arr = new Person[3];
        arr[0] = new Person("Lee", 29);
        arr[1] = new Person("Goo", 15);
        arr[2] = new Person("Soo", 37);

        Arrays.sort(arr); // 탐색에 앞서 정렬을 진행

        int idx = Arrays.binarySearch(arr, new Person("Goo", 0));
        System.out.println(arr[idx]);
    }
}
