using System;

// foreach문으로 배열의 값을 반복해서 사용

// float 형식의 데이터를 3개 저장하는 1차원 배열 arr 생성
float[] arr = { 10.5f, 20.1f, 30.2f };

float sum = 0.0f;  // 배열의 합을 저장해 놓을 sum 변수 선언과 동시에 0으로 초기화

foreach (float f in arr) {
    sum += f;  // 각각의 요소를 sum 변수에 누적
}

Console.WriteLine(sum);  // 60.8
