import static java.lang.System.out;
import java.util.Arrays;

public class SelectionSort {
	public static void main(String[] args) {

		int[] array = {12, 326, 127, 467, 110, 58};
		int size = 6;

		array = SelectionSort(array, size);
		out.print(Arrays.toString(array));
	}

	public static int[] SelectionSort(int arr[], int MAX) {
		int i, j;
		int min, temp;
		for (i = 0; i < MAX - 1; i++) {
			min = i;
			for (j = i + 1; j < MAX; j++) {
				if (arr[j] < arr[min]) min = j;
			}
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
		return arr;
	}
}
