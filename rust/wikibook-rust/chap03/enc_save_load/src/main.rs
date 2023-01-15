use encoding_rs;
use std::fs;
use std::fs::File;
use std::io::Write;

fn main() {
    // 저장할 파일 이름 지정
    let filename = "test-euckr.txt";
    // EUC_KR로 저장
    save_euckr(filename, "맛있게 먹으면 0칼로리");
    // EUC_KR 파일 읽어오기
    let s = load_euckr(filename);
    println!("{}", s);
}

fn save_euckr(filename: &str, text: &str) {
    // EUC_KR로 인코드
    let (enc, _, _) = encoding_rs::EUC_KR.encode(text);
    let buf = enc.into_owned();
    // 파일 생성 및 내용 쓰기
    let mut file = File::create(filename).expect("생성");
    file.write(&buf[..]).expect("쓰기");
}

fn load_euckr(filename: &str) -> String {
    // 파일을 한 번에 읽어들임
    let buf = fs::read(filename).expect("읽기");
    // EUC_KR로 디코드
    let (dec, _, _) = encoding_rs::EUC_KR.decode(&buf);
    return dec.into_owned();
}
