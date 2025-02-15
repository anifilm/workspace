// 인스턴스 복사(복제): clone 메서드
class Point implements Cloneable {
    private int xPos;
    private int yPos;

    public Point(int x, int y) {
        xPos = x;
        yPos = y;
    }

    public void showPosition() {
        System.out.printf("[%d, %d]\n", xPos, yPos);
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

class InstanceCloning {
    public static void main(String[] args) {
        Point org = new Point(3, 5);
        Point cpy;

        try {
            cpy = (Point) org.clone();
            org.showPosition();
            cpy.showPosition();
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
    }
}
