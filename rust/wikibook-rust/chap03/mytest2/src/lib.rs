#[cfg(test)]
mod tests {
    #[test]
    fn calc_test1() {
        // 단순한 계산 테스트 1
        assert_eq!(100 * 2, 200);
        assert_eq!((1 + 2) * 3, 9);
        assert_eq!(1 + 2 * 3, 7);
    }
    #[test]
    fn calc_test2() {
        // 단순한 계산 테스트 2
        assert_eq!(2 * 3, 6);
        //
        assert_eq!(2 * 3, 7);
    }
}
