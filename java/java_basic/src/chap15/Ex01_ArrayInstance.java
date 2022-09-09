package chap15;

class BoxA1 {  // [1]
    // ...
}

class Ex01_ArrayInstance {
    public static void main(String[] args) {
        // 길이가 5인 int형 1차원 배열 생성
        int[] arr1 = new int[5];

        // 길이가 7인 double형 1차원 배열 생성
        double[] arr2 = new double[7];

        // 배열의 참조 변수와 객체 생성 분리
        float[] arr3;
        arr3 = new float[9];

        // 객체 대상 1차원 배열
        BoxA1[] arr4 = new BoxA1[5];

        // 배열의 객체 변수 접근 / 메서드 사용
        System.out.println("배열 arr1 길이: " + arr1.length); // [2]
        System.out.println("배열 arr2 길이: " + arr2.length);
        System.out.println("배열 arr3 길이: " + arr3.length);
        System.out.println("배열 arr4 길이: " + arr4.length);
    }
}
