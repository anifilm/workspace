// 배열의 복사
class CopyOfSystem {
    public static void main(String[] args) {
        double[] org = {1.1, 2.2, 3.3, 4.4, 5.5};
        double[] cpy = new double[3];

        // 배열 org의 인덱스 1에서 배열 cpy 인덱스 0으로 세 개의 요소 복사
        System.arraycopy(org, 1, cpy, 0, 3);

        for (double d : cpy)
            System.out.print(d + "\t");
        System.out.println();
    }
}

/*

public static void arraycopy(Object src, int srcPos, Object dest, int destPos, int length)
  -> 배열 src의 srcPos에서 배열 dest의 destPos로 length 길이만큼 복사

 */
