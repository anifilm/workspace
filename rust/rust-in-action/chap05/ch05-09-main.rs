fn main() {
    // f32에서 가수부를 분리하고 디코딩하기
    let n: f32 = 42.42;
    let n_bits: u32 = n.to_bits();
    let mut mantissa: f32 = 1.0;

    for i in 0..23 {
        let mask = 1 << i;
        let one_at_bit_i = n_bits & mask;
        if one_at_bit_i != 0 {
            let i_ = i as f32;
            let weight = 2_f32.powf(i_ - 23.0);
            mantissa += weight;
        }
    }
}
