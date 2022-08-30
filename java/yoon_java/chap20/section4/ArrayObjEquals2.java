// 배열의 비교
import java.util.Arrays;

class INum {
    private int num;

    public INum(int num) {
        this.num = num;
    }

    @Override
    public boolean equals(Object obj) {
        if (this.num == ((INum)obj).num)  // 두 인스턴스의 내용 비교
            return true;
        else
            return false;
    }
}

class ArrayObjEquals2 {
    public static void main(String[] args) {
        INum[] arr1 = new INum[3];
        INum[] arr2 = new INum[3];

        arr1[0] = new INum(1); arr2[0] = new INum(1);
        arr1[1] = new INum(2); arr2[1] = new INum(2);
        arr1[2] = new INum(3); arr2[2] = new INum(3);

        System.out.println(Arrays.equals(arr1, arr2));
    }
}
