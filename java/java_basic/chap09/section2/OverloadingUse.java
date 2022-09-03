class Calc {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a) {
        return a + 1;
    }

    double add(double a, double b) {
        return a + b;
    }
}

public class OverloadingUse {
    public static void main(String[] args) {
        Calc calc = new Calc();  // [1]
        int nRtn1 = calc.add(3, 9);  // [2]
        int nRtn2 = calc.add(3);  // [3]
        double nRtn3 = calc.add(3.0, 9.0);  // [4]

        System.out.println("Rtn1 = " + nRtn1);
        System.out.println("Rtn2 = " + nRtn2);
        System.out.println("Rtn3 = " + nRtn3);
    }
}
