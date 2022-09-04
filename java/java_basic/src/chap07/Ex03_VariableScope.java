package chap07;

class Ex03_VariableScope {
    public static void main(String[] args) {
        boolean myState = true;
        int num1 = 11;

        if (myState) {
            //int num1 = 22;
            num1++;
            System.out.println(num1);
        }

        {
            int num2 = 33;
            num2++;
            System.out.println(num2);
        }
        //System.out.println(num2);

        for (int i = 0; i < 3; i++) {
            System.out.println(i);
        }
        //System.out.println(i);
    }
}
