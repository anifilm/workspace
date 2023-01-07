fn main() {
    // 거스름돈
    let price: i64 = 3950;
    // 각 동전이 몇 개 있는지 정의
    let count500: i64 = 10;
    let count100: i64 = 3;
    let count50: i64 = 10;
    // 500원 동전의 수만큼 반복
    for i500 in 0..(count500 + 1) {
        // 100원의 동전 수만큼 반복
        for i100 in 0..(count100 + 1) {
            // 50원 동전의 수만큼 반복
            for i50 in 0..(count50 + 1) {
                // 동전의 합계를 계산
                let total: i64 = i50 * 50 + i100 * 100 + i500 * 500;
                // 동전의 합계가 거스름돈과 같으면 출력
                if price == total {
                    println!("500원x{} + 100원x{} + 50원x{} = {}", i500, i100, i50, total);
                }
            }
        }
    }
}
