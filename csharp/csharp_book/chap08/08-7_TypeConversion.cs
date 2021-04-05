using System;

// Convert 클래스로 형식 변환
double doubleVal = 12.34;
int intVal = 1234;

doubleVal = intVal;  // double 자료형에 int 형을 대입 (가능)
Console.WriteLine("암시적 형 변환: " + doubleVal);  // 1234

doubleVal = 12.34;
intVal = (int)doubleVal;  // double 자료형을 int 형으로 형 변환 (자료 손실)
Console.WriteLine("명시적 형 변환 " + intVal);  // 12

string s = "";
s = Convert.ToString(doubleVal);  // Convert 클래스 사용
Console.WriteLine("형 변환 (Convert 클래스 사용): " + s);  // "12.34"

/* Convert 클래스의 주요 메서드
Convert.ToString()   숫자 데이터 형식을 문자열로 변경
Convert.ToInt32()    숫자 데이터 형식을 정수 형식으로 변경
Convert.ToDouble()   숫자 데이터 형식을 실수 형식으로 변경
Convert.ToChar()     입력받은 숫자 또는 문자열 하나를 문자로 변경
*/
