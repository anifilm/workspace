fn use_value(_val: i32) {}

fn main() {
    let a = 123;
    use_value(a);

    println!("{}", a);
}
