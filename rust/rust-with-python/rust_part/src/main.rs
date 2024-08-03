fn dummy(x: &String) {
    println!("{}", x);
}

fn main() {
    let x = String::from("Hello");
    dummy(&x);
    println!("{}", x);
}
