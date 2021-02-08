class CardCompany:  # 싱글톤 패턴으로 카드회사 클래스 선언
    _instance = None

    @classmethod
    def _get_instance(cls):
        return cls._instance

    @classmethod
    def get_instance(cls, *args, **kargs):
        cls._instance = cls(*args, **kargs)
        cls.instance = cls._get_instance
        return cls._instance

    def create_card(self):  # 카드 발급
        card = Card()
        return card


class Card():
    serial_num = 10000  # static 변수

    def __init__(self):
        Card.serial_num += 1
        self.card_number = Card.serial_num  # 카드 번호 자동 생성

    def get_card_number(self):
        return self.card_number

    def set_card_number(self, card_number):
        self.card_number = card_number


def main():
    company = CardCompany.get_instance()  # 싱글톤 패턴

    my_card = company.create_card()    # 회사 메서드를 통한 card 생성
    your_card = company.create_card()  # 회사 메서드를 통한 card 생성

    print(my_card.get_card_number())    # 10001 출력
    print(your_card.get_card_number())  # 10002 출력


if __name__ == '__main__':
    main()
