#[derive(Debug, PartialEq)]
pub enum FileState {
    Open,
    Closed,
}

#[derive(Debug)]
pub struct File {
    name: String,
    data: Vec<u8>,
    state: FileState,
}

impl File {
    fn new(name: &str) -> File {
        File {
            name: String::from(name),
            data: Vec::new(),
            state: FileState::Closed,
        }
    }
}

fn main() {
    let f7 = File::new("f7.txt");
    //...
    println!("{:?}", f7);
}
