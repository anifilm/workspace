import static java.lang.System.out;
import java.util.Arrays;

public class ExchangeSort {
    public static void main(String[] args) {
        int[] array = {12, 326, 127, 467, 110, 58};

        array = ExchangeSort(array);
        out.print(Arrays.toString(array));
    }

    public static int[] ExchangeSort(int arr[]) {
        int i, j;
        int temp;
        int numLength = 6;
        for (i = 0; i < numLength - 1; i++) {
            for (j = (i + 1); j < numLength; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }
}
