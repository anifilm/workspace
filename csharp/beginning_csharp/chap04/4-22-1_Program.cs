using System;

class SortObject { // 배열을 정렬할 수 있는 기능을 가진 타입 정의
    int[] numbers;

    public SortObject(int[] numbers) { // 배열을 생성자의 인자로 받아서 보관
        this.numbers = numbers;
    }

    public void Sort(bool ascending) { // 전형적인 선택 정렬 알고리즘을 구현한 메서드
        int temp;

        for (int i = 0; i < numbers.Length; i++) {
            int lowPos = i;
            for (int j = i + 1; j < numbers.Length; j++) {
                if (ascending == true) { // 오름차순 정렬
                    if (numbers[j] < numbers[lowPos]) {
                        lowPos = j;
                    }
                } else { // 내림차순 정렬
                    if (numbers[j] > numbers[lowPos]) {
                        lowPos = j;
                    }
                }
            }

            temp = numbers[lowPos];
            numbers[lowPos] = numbers[i];
            numbers[i] = temp;
        }
    }

    public void Display() { // numbers 요소를 화면에 출력
        for (int i = 0; i < numbers.Length; i++) {
            Console.Write(numbers[i]);
            if (i == numbers.Length - 1) break;
            Console.Write(", ");
        }
        Console.WriteLine();
    }
}

class Program {
    static void Main(string[] args) {
        int[] intArray = new int[] { 5, 2, 3, 1, 0, 4 };

        SortObject so = new SortObject(intArray);

        so.Sort(true);
        so.Display();

        Console.WriteLine();

        so.Sort(false);
        so.Display();
    }
}
