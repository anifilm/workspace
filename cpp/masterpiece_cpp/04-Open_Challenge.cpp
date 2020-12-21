/*
Open Challenge �ѱ� �����ձ� ����
n���� �ϴ� �ѱ� ���� �ձ� ������ �ۼ��غ���. �Ʒ��� ����� ���� ������ ���� �Է¹ް�,
���� �� ����� �̸��� �Է¹޾� ������ �����Ѵ�.
  (���� ��� ����...)

��Ʈ
  (1) 3���� ���� �������.
    - WordGame Ŭ����: �����ձ� ���� ��ü�� ��ϴ� Ŭ����
    - Player Ŭ����: ������ ǥ���ϴ� Ŭ����
    - main() �Լ�: WordGame ��ü�� �����ϰ� ������ �����ϴ� �Լ�

  (2) �ѱ� ����
  �ѱ� ���ڿ��� �����ϱ� ���� string Ŭ������ �̿��϶�. �ѱ��� 2����Ʈ �ڵ�� ����ǹǷ�
  string ��ü�� ����� �ѱ� ���ڿ����� �� ���ڸ� ���Ϸ��� �� ����Ʈ�� �Բ� ���Ͽ���
  �Ѵ�. ���� ��� ������ ����.

    string a = "�ƹ���";  // 6���� ����Ʈ�� ����, a.size()�� 6 (3�� �ƴ�)
    string b = "���찳";  // 6���� ����Ʈ�� ����
    if (a.at(4) == b.at(0) && a.at(5) == b.at(1)) {  // "�ƹ���"�� '��'�� "���찳"�� '��'�� ��
        // �����ձ� ������ ��� ó�� �ڵ�
    }
    else {
        // ������ ��� ó�� �ڵ�
    }

*/
#include <iostream>

using namespace std;

class Player {
private:
    string name;
public:
    string getName() { return this->name; };
    void setName(string name) { this->name = name; };
};

class WordGame {
private:
    int user;
    Player* player;
    string word = "�ƹ���";
public:
    WordGame(int n) {
        this->user = n;
        player = new Player[n];
    }
    ~WordGame() { delete[] player; }
    string getWord() { return this->word; };
    bool checkWord(string word);
    void game();
};

bool WordGame::checkWord(string word) {
    string a = this->word;
    string b = word;
    if (a.length() == 6) {
        // �Էµ� ���ڿ��� �� ������ ���
        if (a.at(4) == b.at(0) && a.at(5) == b.at(1)) {
            this->word = b;
            return true;
        }
    }
    else if (a.length() == 4) {
        // �Էµ� ���ڿ��� �� ������ ���
        if (a.at(2) == b.at(0) && a.at(3) == b.at(1)) {
            this->word = b;
            return true;
        }
    }
    return false;
}

void WordGame::game() {
    string name;
    for (int i = 0; i < user; i++) {
        string name;
        cout << "���ڰ��� �̸��� �Է��ϼ���. ��ĭ����: ";
        cin >> name;
        player[i].setName(name);
    }
    cout << "�����ϴ� �ܾ�� " << getWord() << " �Դϴ�." << endl;
    string word;
    int count = 0;
    while (true) {
        cout << player[count].getName() << ": ";    // ����� �̸� ���
        cin >> word;
        if (!checkWord(word)) {
            cout << "\n" << player[count].getName() << "���� Ʋ�Ƚ��ϴ�." << endl;
            cout << "������ �����մϴ�." << endl;
            break;
        }
        if (count < user - 1) count++;
        else count = 0;
    }
}

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    cout << "���� �ձ� ������ �����մϴ�." << endl;
    int n;
    cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�? ";
    cin >> n;
    WordGame wordgame(n);
    wordgame.game();

    return 0;
}
