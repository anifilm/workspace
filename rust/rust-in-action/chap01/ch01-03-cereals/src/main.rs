#[derive(Debug)] // 열거형 출력시 println! 매크로 사용
enum Cereal {
    Barley,
    Millet,
    Rice,
    Rye,
    Spelt,
    Wheat,
}

fn main() {
    let mut grains: Vec<Cereal> = vec![];
    grains.push(Cereal::Rye);
    drop(grains); // 변수와 내부 항목을 지움

    println!("{:?}", grains); // 삭제된 변수에 접근 (오류 발생!)
}
