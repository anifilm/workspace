using System;
using System.Collections.Generic;

class ElementRemoveWithReverse {

    class Student {
        public string name;
        public int grade;
    }

    static void Main(string[] args) {

        List<Student> list = new List<Student>();

        list.Add(new Student() { name = "임채영", grade = 1 });
        list.Add(new Student() { name = "윤인성", grade = 2 });
        list.Add(new Student() { name = "정흥규", grade = 3 });
        list.Add(new Student() { name = "연하진", grade = 4 });
        list.Add(new Student() { name = "구지연", grade = 1 });
        list.Add(new Student() { name = "김연화", grade = 2 });
        list.Add(new Student() { name = "서환길", grade = 2 });

        // 5-21: foreach 반복문으로 요소 제거
        foreach (var item in list) {
            if (item.grade > 1) {
                // list.Remove(item);
                Console.WriteLine(item);
            }
        }

        // for (int i = 0; i < list.Count; i++) {
        //     if (list[i].grade > 1) {
        //         Console.WriteLine(list[i]);
        //     }
        // }

        // foreach (var item in list) {
        //     Console.WriteLine(item.name + ": " + item.grade);
        // }
    }
}
