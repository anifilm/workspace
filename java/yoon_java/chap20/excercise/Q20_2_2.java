/* 문제 20-2 [정렬의 기준 수정하기]
문제 2
앞서 제시한 예제 ArrayObjSort.java에서는 Person의 인스턴스들을 나이순으로 정렬하였는데, 이를 이름의 길이 순으로 정렬이
되도록 수정해 보자. 즉 이름의 길이가 짧은 인스턴스일수록 배열의 앞쪽에 위치하도록 예제를 수정해야 한다.
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
         Person p = (Person)obj;
         return this.name.length() - p.name.length();
     }
     @Override
     public String toString() {
         return name + ": " + age;
     }
 }

 class Q20_2_2 {
     public static void main(String[] args) {
         Person[] arr = new Person[3];
         arr[0] = new Person("Lee Jung Soo", 29);
         arr[1] = new Person("Hyun Jee", 15);
         arr[2] = new Person("Park Ha Young", 37);

         Arrays.sort(arr);
         for (Person p : arr)
             System.out.println(p);
     }
 }
