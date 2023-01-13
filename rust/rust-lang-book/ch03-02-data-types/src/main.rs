fn main() {
// 3.2.1 스칼라 타입
    // (1) 정수 타입

    // (2) 부동 소수점 타입
    let x = 2.0; // f64
    let y: f32 = 3.0; // f32

    // (3) 사칙 연산
    let sum = 5 + 10;
    let difference = 95.5 - 4.3;
    let product = 4 * 30;
    let quotient = 56.7 / 32.2;
    let remainder = 43 % 5;

    // (4) 불리언 타입
    let t = true;
    let f: bool = false;

    // (5) 문자 타입
    let c = 'z';
    let z = 'Z';
    let heart_eyed_cat = '😻';

// 3.2.2 컴파운드 타입
    // (1) 튜플 타입
    let tup: (i32, f64, u8) = (500, 6.4, 1);

    let tup = (500, 6.4, 1);
    let (x, y, z) = tup;
    println!("y의 값: {}", y);

    let x: (i32, f64, u8) = (500, 6.4, 1);
    let five_hundred = x.0;
    let six_point_four = x.1;
    let one = x.2;

    // (2) 배열 타입
    let a = [1, 2, 3, 4, 5];


}
