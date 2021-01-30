// 배열의 정렬
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
        Person p = (Person)obj;
        return this.age - p.age;  // 나이가 같으면 0을 반환
    }
    @Override
    public String toString() {
        return name + ": " + age;
    }
}

class ArrayObjSearch {
    public static void main(String[] args) {
        Person[] arr = new Person[3];
        arr[0] = new Person("Lee", 29);
        arr[1] = new Person("Goo", 15);
        arr[2] = new Person("Soo", 37);

        Arrays.sort(arr);  // 탐색에 앞서 정렬을 진행

        int idx = Arrays.binarySearch(arr, new Person("Who are you?", 37));
        System.out.println(arr[idx]);
    }
}
