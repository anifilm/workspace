package chap05.openchallenge;

import java.util.Scanner;

public class Bear extends GameObject {
    private Scanner scanner;

    public Bear(int x, int y, int distance) {
        super(x, y, distance);
        scanner = new Scanner(System.in);
    }
    @Override
    public void move() {
        char c;
        System.out.print("왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ");
        c = scanner.next().charAt(0);  // 문자 하나 입력받기
        switch (c) {
            case 'a':  // 왼쪽
                x--;
                if (x < 0) x = 0;
                break;
            case 'f':  // 오른쪽
                x++;
                if (x >= Game.MAX_X) x = Game.MAX_X - 1;
                break;
            case 'd':  // 위
                y--;
                if (y < 0) y = 0;
                break;
            case 's':  // 아래
                y++;
                if (y >= Game.MAX_Y) y = Game.MAX_Y - 1;
                break;
        }
    }
    @Override
    public char getShape() {  // Bear의 모양 반환
        return 'B';
    }
}
