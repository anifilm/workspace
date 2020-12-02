// this로 다른 생성자 호출하기, this를 사용하여 주소 값 반환하기
package chap06.section1.thisex;

class Person {
    String name;
    int age;

    Person() {
        this("이름없음", 1);    // this를 사용해 Person(String, int) 생성자 호출
    }

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    Person returnItSelf() {
        return this;    // this 반환
    }
}

public class CallAnotherConst {
    public static void main(String[] args) {

        Person noName = new Person();
        System.out.println(noName.name);
        System.out.println(noName.age);

        Person p = noName.returnItSelf();   // this 값을 클래스 변수에 대입
        System.out.println(p);              // noName.returnItSelf()의 반환값 출력
        System.out.println(noName);         // 참조 변수 출력
    }
}
