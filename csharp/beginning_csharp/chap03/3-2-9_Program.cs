using System;

class Program {
    static void Main(string[] args) {
        int product1 = 5000;
        int product2 = 5500;
        int product3 = 6000;
        int product4 = 10000;
        int product5 = 60000;

        int[] products = new int[5];
        string[] names = new string[1000];

        products[0] = 100;
        products[1] = 200;
        int book = products[0];
        int sum = products[0] + products[1];

        int[] products2 = new int[5] { 1, 2, 3, 4, 5 }; // 배열의 요소 개수를 지정
        int[] products3 = new int[] { 1, 2, 3, 4, 5 };  // 배열의 요소 개수를 미지정

        string text = "Hello World";
        char ch1 = text[0];
        char ch2 = text[1];

        Console.WriteLine(ch1); // 출력 결과: H
        Console.WriteLine(ch2); // 출력 결과: e

        int[,] arr2 = new int[10, 5]; // 2차원 배열
        short[,,] arr3 = new short[8, 3, 10]; // 3차원 배열

        int[,] arr4 = new int[2, 3] {
            {1, 2, 3}, // 1차원의 요소 수는 3개이고,
            {4, 5, 6}, // 2차원의 요소 수는 2개인 배열을 초기화
        };

        int[,,] arr5 = new int[2, 3, 4] {
            {
                {1, 2, 3, 4},    // 1차원의 요소 수는 4개이고,
                {5, 6, 7, 8},
                {9, 10, 11, 12}, // 2차원의 요소 수는 3개이고,
            },
            {
                {13, 14, 15, 16},
                {17, 18, 19, 20},
                {21, 22, 23, 24},
            }, // 3차원의 요소 수는 2개인 배열을 초기화
        };

        int[][] arr = new int[5][]; // 2차원 가변 배열

        arr[0] = new int[10];
        arr[1] = new int[9];
        arr[2] = new int[8];
        arr[3] = new int[3];
        arr[4] = new int[5];
    }
}
