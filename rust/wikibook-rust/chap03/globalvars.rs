// 전역 가변 변수 선언
static mut TAX: f32 = 0.1;

fn main() {
    // 안전하지 않다는 것을 명시
    unsafe {
        // 가변 전역 변수 사용
        println!("Price : {}", TAX * 300.0);
        // 가변 전역 변수의 값 변견
        TAX = 0.08;
        println!("Price : {}", TAX * 300.0);
    }
}
