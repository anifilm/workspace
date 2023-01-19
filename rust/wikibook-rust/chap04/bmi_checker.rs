// BMI 비만도 파악
fn main() {
    let body = Body::new(163.0, 54.2, "성은");
    body.print_result();
    let body = Body::new(158.2, 55.0, "가인");
    body.print_result();
    let body = Body::new(169.8, 73.3, "채연");
    body.print_result();
}

// 비만도 판정용 구조체
struct BmiRange {
    min: f64,
    max: f64,
    label: String,
}

impl BmiRange {
    // 객체 생성 메서드
    fn new(min: f64, max: f64, label: &str) -> Self {
        BmiRange {
            min,
            max,
            label: label.to_string(),
        }
    }
    // 범위 안에 있는지 테스트하는 함수
    fn test(&self, v: f64) -> bool {
        self.min <= v && v < self.max
    }
}

// 키와 몸무게, 이름을 저장할 구조체
struct Body {
    height: f64,  // cm
    weight: f64,  // kg
    name: String, // 이름
}

impl Body {
    // 객체를 생성해 반환
    fn new(height: f64, weight: f64, name: &str) -> Self {
        Body {
            height,
            weight,
            name: name.to_string(),
        }
    }
    // BMI 계산
    fn calc_bmi(&self) -> f64 {
        self.weight / (self.height / 100.0).powf(2.0)
    }
    // 비만 판정 출력
    fn print_result(&self) {
        // BMI 구하기
        let bmi = self.calc_bmi();
        // 판정용 객체를 배열로 생성
        let bmi_list = [
            BmiRange::new(0.0, 18.5, "저체중"),
            BmiRange::new(18.5, 23.0, "정상"),
            BmiRange::new(23.0, 25.0, "비만전단계"),
            BmiRange::new(25.0, 30.0, "1단계 비만"),
            BmiRange::new(30.0, 35.0, "2단계 비만"),
            BmiRange::new(35.0, 99.9, "3단계 비만"),
        ];
        let mut result = String::from("계산 불가");
        // 배열을 하나씩 테스트
        for range in bmi_list {
            if range.test(bmi) {
                result = range.label.clone();
                break;
            }
        }
        println!("{}님, BMI: {:.1}, 결과: {}", self.name, bmi, result);
    }
}
