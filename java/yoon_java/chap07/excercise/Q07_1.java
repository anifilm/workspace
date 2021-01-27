/* 문제 07-1 [생성자를 포함하는 클래스의 정의]
밑변과 높이 정보를 저장할 수 있는 Triangle 클래스를 정의하자. (그 안에 적절한 생성자도 정의하자.) 그리고 밑변과 높이
정보를 변경할 수 있는 메서드와 삼각형의 넓이를 계산해서 반환하는 메서드도 함께 정의하자. 물론 이 클래스의 활용의 예를
보이는 main 메서드도 함께 작성해야 한다.
 */
class Triangle {
    private int width;
    private int height;

    public Triangle(int w, int h) {
        width = w;
        height = h;
    }
    public int getWidth() { return width; }
    public int getHeight() { return height; }
    public void setWidth(int w) { width = w; }
    public void setHeight(int h) { height = h; }
    public int calcArea() {
        return width * height / 2;
    }
}

class Q07_1 {
    public static void main(String[] args) {
        Triangle tri = new Triangle(10, 20);
        System.out.println("삼각형의 밑변은 " + tri.getWidth() + " 높이는 " + tri.getHeight());
        System.out.println("삼각형의 넓이는 " + tri.calcArea());
        System.out.println();

        tri.setWidth(20);
        tri.setHeight(30);
        System.out.println("삼각형의 밑변은 " + tri.getWidth() + " 높이는 " + tri.getHeight());
        System.out.println("삼각형의 넓이는 " + tri.calcArea());
    }
}
