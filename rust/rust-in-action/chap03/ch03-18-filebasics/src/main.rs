//! 한 번에 한 단계씩 파일을 시뮬레이트 한다

/// 아마도 파일 시스템에 있을 '파일'을 나타낸다
#[derive(Debug)]
pub struct File {
    name: String,
    data: Vec<u8>,
}

impl File {
    /// 새 파일은 비어 있다고 가정하지만 이름은 필요하다
    /// 빈 `File`을 새로 만든다
    ///
    /// # 예제
    ///
    /// ```
    /// let f = File::new("f1.txt");
    /// ```
    pub fn new(name: &str) -> File {
        File {
            name: String::from(name),
            data: Vec::new(),
        }
    }

    /// 파일 길이를 바이트로 변환한다
    pub fn len(&self) -> usize {
        self.data.len()
    }

    // 파일 이름을 반환한다
    pub fn name(&self) -> String {
        self.name.clone()
    }
}

fn main() {
    let f1 = File::new("f1.txt");

    let f1_name = f1.name();
    let f1_length = f1.len();

    println!("{:?}", f1);
    println!("{} is {} bytes long", f1_name, f1_length);
}
