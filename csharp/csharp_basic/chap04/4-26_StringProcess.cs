using System;

// 4-26: 대문자화와 소문자화
string input = "Potato Tomato";
Console.WriteLine(input.ToUpper());
Console.WriteLine(input.ToLower());

// 4-27: 문자열 자르기
input = "감자 고구마 토마토";
string[] inputs = input.Split(new char[] {' '}); // 공백을 기준으로 문자열을 자름

foreach (var item in inputs) {
    Console.WriteLine(item);
}

// 4-28: 문자열 양 옆의 공백 제거
input = " test        \n";
Console.WriteLine("::" + input.Trim() + "::"); // "::"는 공백 확인용

// 4-29: 배열을 문자열로 변환
string[] array = {"감자", "고구마", "토마토", "가지"};
Console.WriteLine(string.Join(", ", array)); // 배열을 ", "으로 연결하여 문자열로 변환
