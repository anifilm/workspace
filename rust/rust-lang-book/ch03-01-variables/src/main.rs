fn main() {
    /* Variables and Mutablility */
    //let x = 5;
    let mut x = 5;
    println!("The value of x is: {x}");
    x = 6;
    println!("The value of x is: {x}");

    /* Constants */
    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;

    /* Shdowing */
    let x = 5;
    let x = x + 1;
    {
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }
    println!("The value of x is: {x}");

    let spaces = "   ";
    let spaces = spaces.len();
    /*
    let mut spaces = "   ";
    spaces = spaces.len(); // 변수의 자료형이 다르다.
    */
}
