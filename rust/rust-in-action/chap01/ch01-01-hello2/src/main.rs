fn greet_world() {
    println!("Hello, world!");
    let southern_germany = "Grüß Gott!";
    let korean = "안녕, 세상아!";
    let regions = [southern_germany, korean];

    for region in regions.iter() {
            println!("{}", &region);
    }
}

fn main() {
    greet_world();
}
