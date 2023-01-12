fn main() {
    let needle = 42;
    let haystack = [1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862];

    for item in &haystack {
        if *item == needle { // item이 가리키는 메모리 주소에 있는 값을 참조
            println!("{}", item);
        }
    }
}
