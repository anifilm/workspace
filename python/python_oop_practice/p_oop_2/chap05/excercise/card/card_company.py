from card import Card

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
