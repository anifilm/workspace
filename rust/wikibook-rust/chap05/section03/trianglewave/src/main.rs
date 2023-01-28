use hound;

const SAMPLE_RATE: f32 = 44100.0;

fn main() {
    // WavWriter 생성
    let spec = hound::WavSpec {
        channels: 1,
        sample_rate: SAMPLE_RATE as u32,
        bits_per_sample: 32,
        sample_format: hound::SampleFormat::Float,
    };
    let mut fw = hound::WavWriter::create("tri.wav", spec).unwrap();
    // 삼각파로 음을 생성
    let mut wav: Vec<f32> = vec![];
    let bpm = 120;
    // 멜로디 생성
    [60, 64, 67, 64, 60, 64, 67, 72].iter().for_each(|no| {
        wav.extend(tri_wave(*no, calc_len(bpm, 8), 0.5));
    });
    // 파일로 쓰기
    for v in wav.into_iter() {
        fw.write_sample(v).unwrap();
        println!("{}", v);
    }
}

// 노트 번호를 주파수로 변경
fn noteno_to_hz(no: i32) -> f32 {
    440.0 * 2.0f32.powf((no - 69) as f32 / 12.0)
}
// n 음표 샘플 수를 계산
fn calc_len(bpm: usize, n: usize) -> usize {
    let base_len = (60.0 / bpm as f32) * SAMPLE_RATE;
    ((4.0 / n as f32) * base_len) as usize
}
// 삼각파 생성 함수
fn tri_wave(noteno: i32, len: usize, gain: f32) -> Vec<f32> {
    let tone = noteno_to_hz(noteno); // 주파수 얻기
    let form_samples = SAMPLE_RATE / tone; // 주기 얻기
    let mut wav: Vec<f32> = vec![0.0; len];
    let half_fs = form_samples / 2.0; // 주기 절반으로 나눔
    for i in 0..len {
        let hi = i as f32 / half_fs;
        let mut v: f32 = 2.0 * (hi % 1.0) - 1.0;
        let is_climbing = hi.floor() as usize % 2 == 0;
        v = if is_climbing { v } else { -v };
        wav[i] = v;
    }
    // 음량 조절
    wav.into_iter().map(|v| (v * gain) as f32).collect()
}
