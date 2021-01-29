// 1차원 배열의 생성 방법
class ArrayIsInstance {
    public static void main(String[] args) {
        // 길이가 5인 int형 1차원 배열의 생성
        int[] arr1 = new int[5];

        // 길이가 7인 double형 1차원 배열의 생성
        double[] arr2 = new double[7];

        // 배열의 참조변수와 인스턴스 생성 분리
        float[] arr3;
        arr3 = new float[9];

        // 배열의 인스턴스 변수 접근
        System.out.println("배열 arr1의 길이: " + arr1.length);
        System.out.println("배열 arr2의 길이: " + arr2.length);
        System.out.println("배열 arr3의 길이: " + arr3.length);
    }
}
