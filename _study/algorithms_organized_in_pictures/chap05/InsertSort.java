public class InsertSort {
    public static void main (String[] args) {
        int[] a = {12, 326, 127, 467, 110, 58};

        for (int j = 1; j < a.length; j++) {
            int key = a[j];
            int i = j - 1;
            while(i >= 0 && a[i] > key) {
                a[i + 1] = a[i];
                i = i - 1;
            }
            a[i + 1] = key;
        }

        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }
}
