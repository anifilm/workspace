// 테스트 부터 (최종 실행 파일)부터 만들기
package chap09.section4.test;
import chap09.section3.gamelevel.AdvancedLevel;
import chap09.section3.gamelevel.Player;
import chap09.section3.gamelevel.SuperLevel;

public class MainBoard {
    public static void main(String[] args) {

        Player player = new Player();
        player.play(1);

        AdvancedLevel advancedLevel = new AdvancedLevel();
        player.upgradeLevel(advancedLevel);
        player.play(2);

        SuperLevel superLevel = new SuperLevel();
        player.upgradeLevel(superLevel);
        player.play(3);
    }
}
