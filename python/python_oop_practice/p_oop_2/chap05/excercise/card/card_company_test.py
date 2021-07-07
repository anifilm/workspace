from card_company import CardCompany
from card import Card


def main():
    company = CardCompany.get_instance()  # 싱글톤 패턴

    my_card = company.create_card()    # 회사 메서드를 통한 card 생성
    your_card = company.create_card()  # 회사 메서드를 통한 card 생성

    print(my_card.get_card_number())    # 10001 출력
    print(your_card.get_card_number())  # 10002 출력


if __name__ == '__main__':
    main()
