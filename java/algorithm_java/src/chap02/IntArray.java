package chap02;

public class IntArray {

	public static void main(String[] args) {

		int[] a = new int[5];		// 배열 선언
		
		a[1] = 37;
		a[2] = 51;
		a[4] = a[1] * 2;
		
		for (int i = 0; i < a.length; i++)		// 각 요소의 값을 나타냄
			System.out.println("a[" + i + "] = " + a[i]);
	}
}
