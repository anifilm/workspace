package chap05.openchallenge;

public class Game {
    public static final int MAX_X = 20;
    public static final int MAX_Y = 10;
    private char[][] map = new char[MAX_Y][MAX_X];
    private GameObject[] m = new GameObject[2];
    int state;  // 0: 게임중, 1: Monster가 winner, 2: Human이 winner

    public Game() {

    }
    private void update() {

    }
    private void clear() {

    }
    private void draw() {

    }
    private boolean doesEnd() {

    }
    public void run() {

    }

    public static void main(String[] args) {
        Game game = new Game();
        game.run();
    }
}
