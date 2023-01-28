use image;

fn main() {
    // RGB 코드로 흰색 지정
    let white = image::Rgb::<u8>([255, 255, 255]);
    // RGB 코드로 붉은 색을 지정
    let red = image::Rgb::<u8>([255, 90, 90]);
    // 1칸의 크기(픽셀)
    let w = 64;
    // 체크 무늬를 그리는 클로저
    let draw = |x, y| {
        let (xi, yi) = (x / w, y / w);
        match (xi % 2, yi % 2) {
            (0, 0) => white,
            (1, 0) => red,
            (0, 1) => red,
            (1, 1) => white,
            (_, _) => panic!("error"),
        }
    };
    // 클로저를 지정해 ImageBuffer를 생성
    let img = image::ImageBuffer::from_fn(512, 512, draw);
    // 파일 저장
    img.save("checkboard.png").unwrap();
}
