// 배열의 비교
import java.util.Arrays;

class INum {
    private int num;

    public INum(int num) {
        this.num = num;
    }
}

class ArrayObjEquals {
    public static void main(String[] args) {
        INum[] arr1 = new INum[3];
        INum[] arr2 = new INum[3];

        arr1[0] = new INum(1); arr2[0] = new INum(1);
        arr1[1] = new INum(2); arr2[1] = new INum(2);
        arr1[2] = new INum(3); arr2[2] = new INum(3);

        System.out.println(Arrays.equals(arr1, arr2));
    }
}

/*

위 예제에서 두 배열에 동일한 값으로 초기화된 서로 다른 인스턴스를 각각 저장하였다. 그러나 배열의 비교 결과는 false이다.
이유는 Object 클래스에 정의되어 있는 equals 메서드가 다음과 같이 정의되어 있기 때문이다.

pulbic boolean equals(Object obj) {
    if (this == obj)  // 두 인스턴스가 같은 인스턴스이면
        return true;
    else
        reutnr false;
}  // 이렇듯 Object 클래스에 정의된 equals 메서드는 참조 값 비교를 한다.

따라서 배열의 참조 값 비교가 아닌 내용 비교가 목적이라면 다음과 같이 equals 메서드를 목적에 맞게 오버라이딩 해야 한다.

 */
