using System;
using System.Collections.Generic;

class ModelClassWithList {

    // 5-18: 모델 클래스
    class Student {
        public string name;
        public int grade;
    }

    static void Main(string[] args) {
        // 5-19: 모델 클래스와 List 클래스
        List<Student> list = new List<Student>();

        list.Add(new Student() { name = "임채영", grade = 1 });
        list.Add(new Student() { name = "윤인성", grade = 2 });
        list.Add(new Student() { name = "정흥규", grade = 3 });
        list.Add(new Student() { name = "연하진", grade = 4 });
        list.Add(new Student() { name = "구지연", grade = 1 });
        list.Add(new Student() { name = "김연화", grade = 2 });
        list.Add(new Student() { name = "서환길", grade = 2 });

        foreach (var item in list) {
            Console.WriteLine(item.name + ": " + item.grade);
        }

        // 5-20: 리스트와 모델 클래스 동시 초기화
        List<Student> list2 = new List<Student>() {
            new Student() { name = "임채영", grade = 1 },
            new Student() { name = "윤인성", grade = 2 },
            new Student() { name = "정흥규", grade = 3 },
            new Student() { name = "연하진", grade = 4 },
            new Student() { name = "구지연", grade = 1 },
            new Student() { name = "김연화", grade = 2 },
            new Student() { name = "서환길", grade = 2 }
        };

        foreach (var item in list2) {
            Console.WriteLine(item.name + ": " + item.grade);
        }
    }
}
