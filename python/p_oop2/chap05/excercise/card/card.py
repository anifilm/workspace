class Card():
    serial_num = 10000  # static 변수

    def __init__(self):
        Card.serial_num += 1
        self.card_number = Card.serial_num  # 카드 번호 자동 생성

    def get_card_number(self):
        return self.card_number

    def set_card_number(self, card_number):
        self.card_number = card_number
