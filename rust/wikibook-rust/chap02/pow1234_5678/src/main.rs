// BigInt를 사용하기 위한 선언
use num_bigint::BigInt;

fn main() {
    // BigInt 오브젝트를 만들어 값을 설정
    let v = BigInt::from(1234);
    // 5678 제곱 계산
    println!("{}", v.pow(5678));
}
