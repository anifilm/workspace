public class nested_loop {

    public static void main(String args[]) {

        int dan;
        int times;

        for (dan = 2; dan <= 9; dan++) {
            
            for (times = 1; times <= 9; times++) {
                System.out.println(dan + " X " + times + " = " + dan * times);        
            }

            System.out.println( );      // 한 줄 띄워서 출력
        }
    }
}