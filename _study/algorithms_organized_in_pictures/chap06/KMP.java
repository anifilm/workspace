public class KMP {
    private final int R;   // the radix
    private int[][] dfa;   // the KMP automoton
    private String pat;    // or the pattern string

    public KMP(String pat) {
        this.R = 256;
        this.pat = pat;

        // build DFA from pattern
        int m = pat.length();
        dfa = new int[R][m];
        dfa[pat.charAt(0)][0] = 1;

        for (int x = 0, j = 1; j < m; j++) {
            for (int c = 0; c < R; c++)
                dfa[c][j] = dfa[c][x];        // Copy mismatch cases.
            dfa[pat.charAt(j)][j] = j + 1;    // Set match case.
            x = dfa[pat.charAt(j)][x];        // Update restart state.
        }
    }

    public int search(String txt) {
        // simulate operation of DFA on text
        int m = pat.length();
        int n = txt.length();
        int i, j;
        for (i = 0, j = 0; i < n && j < m; i++) {
            j = dfa[txt.charAt(i)][j];
        }
        if (j == m) return i - m;   // found
        return n;   // not found
    }

    public static void main(String[] args) {

        String pat ="abcd"; // 찾고자 하는 것
        String txt = "I love abc, then abcd is my best character"; // 대상 문자열

        KMP kmp1 = new KMP(pat);
        int offset1 = kmp1.search(txt); // 검색을 수행한다.

        // print results
        System.out.println("text: " + txt);

        System.out.print("pattern: ");
        for (int i = 0; i < offset1; i++)
            System.out.print(" ");
        System.out.println(pat);    // 찾은 경우 패턴을 화면에 보여준다.
    }
}
