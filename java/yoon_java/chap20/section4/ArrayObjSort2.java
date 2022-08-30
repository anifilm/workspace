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
        Person p = (Person) obj;
        return this.age - p.age;
    } // 앞서 정의한 compareTo 메서드와 사실상 동일

    @Override
    public String toString() {
        return name + ": " + age;
    }
}

class ArrayObjSort2 {
    public static void main(String[] args) {
        Person[] arr = new Person[3];
        arr[0] = new Person("Lee", 29);
        arr[1] = new Person("Goo", 15);
        arr[2] = new Person("Soo", 37);

        Arrays.sort(arr);
        for (Person p : arr)
            System.out.println(p);
    }
}
