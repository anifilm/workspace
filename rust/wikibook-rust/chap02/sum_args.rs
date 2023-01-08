fn main() {
    // 명령줄 인수 취득
    let args = std::env::args();
    let mut total = 0.0;
    // 명령줄 인수를 순서대로 연산
    for (i, s) in args.enumerate() {
        // 0번째는 명령어(프로그램) 자신이므로 무시
        if i == 0 { continue; }
        // 명령줄 인수를 숫자 값으로 변환
        let num: f64 = match s.parse() {
            Ok(v) => v,
            Err(_) => 0.0,
        };
        total += num;
    }
    // 결과 표시
    println!("{}", total);
}
