// 증가·감소 연산자를 사용하여 값 연산하기
package chap03.section1.operator;

public class OperationEx2 {
    public static void main(String[] args) {

        int gameScore = 150;            // 게임에서 획득한 점수는 150점

        int lastScore1 = ++gameScore;   // 151 (gameScore에 1만큼 더한 값을 lastScore1에 대입)
        System.out.println("lastScore1:" + lastScore1); // 151
        System.out.println("gameScore :" + gameScore);  // 151

        int lastScore2 = --gameScore;   // 150 (gameScore에 1만큼 뺀 값을 lastScore2에 대입)
        System.out.println("lastScore2:" + lastScore2); // 150
        System.out.println("gameScore :" + gameScore);  // 150

        int lastScore3 = gameScore++;   // 150 (gameScore의 값을 lastScore1에 대입한 후 1을 더함)
        System.out.println("lastScore3:" + lastScore3); // 150
        System.out.println("gameScore :" + gameScore);  // 151

        int lastScore4 = gameScore--;   // 151 (gameScore의 값을 lastScore2에 대입한 후 1을 뺌)
        System.out.println("lastScore4:" + lastScore4); // 151
        System.out.println("gameScore :" + gameScore);  // 150
    }
}
