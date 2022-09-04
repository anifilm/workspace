public class Ex02_PackageUse {
    public static void main(String[] args) {
        Apple apple = new Apple();  // [1]
        apple.showName();

        //Banana banana = new Banana();  // [2]
        com.study.Banana banana = new com.study.Banana();  // [3]
        banana.showName();  // [4]
    }
}
