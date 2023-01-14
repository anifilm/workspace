fn main() {
    // 섀도잉을 이용하지 않음
    {
        let mut v = 300; // v를 가변 변수로 선언
        v = v + 5;
        println!("{}", v);
    }
    // 섀도잉을 이용
    {
        let v = 300; // vs는 불변 변수
        let v = v + 5;
        println!("{}", v);
    }
}
