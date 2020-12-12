import static java.lang.System.out;
import java.util.Arrays;

public class RadixSort {
	public static void main(String[] args) {

		int[] array = {12, 326, 127, 467, 110, 58};
		array = rSort(array);
		out.print(Arrays.toString(array));
		// 결과는 12, 58, 110, 127, 326, 467로 나온다
	}

	public static int[] rSort(int[] array) {
		for (int shift = Integer.SIZE - 1; shift > -1; shift--) {
			int[] tmp = new int[array.length];
			int j = 0;
			for (int i = 0; i < array.length; i++) {
				boolean move = array[i] << shift >= 0;
				if (shift == 0 ? !move : move) {
					tmp[j] = array[i];
					j++;
				}
                else {
				    array[i - j] = array[i];
			    }
    		}
    		for (int i = j; i < tmp.length; i++) {
    			tmp[i] = array[i - j];
    		}
    		array = tmp;
    	}
    	return array;
    }
}
