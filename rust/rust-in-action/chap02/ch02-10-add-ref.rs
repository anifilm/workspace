fn main() {
    let a = 42;
    let r = &a; // a 메모리 주소 참조
    let b = a + *r; // r 메모리 주소에 있는 값 역참조

    println!("a + a = {}", b);
}
