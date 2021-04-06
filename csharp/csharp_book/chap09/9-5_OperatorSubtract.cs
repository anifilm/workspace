using System;

// 빼기(-) 연산자
decimal i = 3.14M;
decimal j = 3.14M;
decimal k = i - j;  // 3.14 - 3.14
Console.WriteLine(k); // 0.00

/* 부동 소수점 형식
키워드   근사 범위                        전체 자릿수         Size     .NET 형식
float   ±1.5 x 10−45  ~ ±3.4 x 1038     ~6-9개 자릿수      4바이트   System.Single
double  ±5.0 × 10−324 ~ ±1.7 × 10308    ~15-17개 자릿수    8바이트   System.Double
decimal ±1.0 x 10-28  ~ ±7.9228 x 1028  28-29개의 자릿수  16바이트   System.Decimal

float   a = 3.14f; (32비트 단 정밀도)
double  b = 3.14;  (64비트 배 정밀도, 부동 소수점 기본 형식)
decimal c = 3.14M; (10진 형식, 재무 및 통화 계산에 적합한 128비트 데이터 형식)
*/
