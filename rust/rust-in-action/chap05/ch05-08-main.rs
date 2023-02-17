fn main() {
    // f32에서 지수부를 분리하고 디코딩하기
    let n: f32 = 42.42;
    let n_bits: u32 = n.to_bits();
    let exponent_ = n_bits >> 23;
    let exponent_ = exponent_ & 0xff;
    let exponent_ = (exponent_ as i32) - 127;
}
