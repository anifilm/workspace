using System;
using System.Collections.Generic;

class Student {
    public string name;
    public int grade;
}

class ElementRemoveWithReverse {
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
        //foreach (var item in list) {
        //    if (item.grade > 1) {
        //        list.Remove(item); // 리스트 객체의 요소를 삭제할 수 없다.
        //    }
        //}

        // 5-22 반복문으로 요소 제거
        //for (int i = 0; i < list.Count; i++) {
        //    if (list[i].grade > 1) {
        //        list.RemoveAt(i); // 리스트 객체 요소의 인덱스를 통한 요소 삭제
        //                          // 요소가 지워지면서 인덱스가 밀려 원하는 결과가 나오지 않는다.
        //    }
        //}

        // 5-23 역 for 반복문을 사용한 요소 제거
        for (int i = list.Count - 1; i >= 0; i--) {
            if (list[i].grade > 1) {
                list.RemoveAt(i); // 맨 뒤에서 부터 차례로 요소를 삭제
            }
        }

        foreach (var item in list) {
            Console.WriteLine(item.name + ": " + item.grade);
        }
    }
}
