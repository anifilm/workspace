fn main() {
    // f32의 부호 비트를 분리하여 디코딩하기
    let n: f32 = 42.42;
    let n_bits: u32 = n.to_bits();
    let sign_bit = n_bits >> 31;
}
