package chap20;

class MyData {
    public static <T> T showData(T data) {  // [1]
        if (data instanceof String) {
            System.out.println("String");
        } else if (data instanceof Integer) {
            System.out.println("Integer");
        } else if (data instanceof Double) {
            System.out.println("Double");
        }

        return data;
    }
}

public class Ex09_GenericMethod {
    public static void main(String[] args) {
        MyData.<String>showData("Hello, world!");
        MyData.showData(1);  // <Integer> 생략  // [2]
        MyData.showData(1.0);  // <Double> 생략
    }
}
