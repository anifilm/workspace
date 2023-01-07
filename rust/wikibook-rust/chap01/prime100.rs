// 소수인지 확인하는 함수
fn is_prime(n: usize) -> bool {
    for i in 2..n {
        if n % i == 0 {
            return false
        }
    }
    return true
}

// 소수 100개를 구하는 함수
fn get_primes(primes: &mut[usize; 100]) {
    let mut i = 2;
    let mut count = 0;
    // count가 100이 될 때까지 반복
    while count < 100 {
        if is_prime(i) {
            primes[count] = i;
            count += 1;
        }
        i += 1;
    }
}

fn main() {
    // 초기값이 0인 배열 100개를 준비
    let mut primes = [0; 100];
    // 소수 100개를 구함
    get_primes(&mut primes);
    // 결과 표시
    println!("{:?}", primes);
}
