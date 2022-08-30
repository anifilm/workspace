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
        if (this.age > p.age)
            return 1;  // 인자로 전달된 obj가 작다면 양의 정수 반환
        else if (this.age < p.age)
            return -1;  // 인자로 전달된 obj가 크다면 음의 정수 반환
        else
            return 0;  // 인자로 전달된 obj가 같다면 0을 반환
    }

    @Override
    public String toString() {
        return name + ": " + age;
    }
}

class ArrayObjSort {
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
