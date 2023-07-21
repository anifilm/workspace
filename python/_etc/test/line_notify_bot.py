from dotenv import load_dotenv
import os
import requests

load_dotenv()

def main():
    try:
        api_url = 'https://notify-api.line.me/api/notify'
        token = os.environ.get('LineToken')

        response = requests.post(
            api_url,
            headers = {
                'Authorization': 'Bearer ' + token
            },
            data = {
                'message': '테스트 입니다'
            }
        )
        print(response)
    except Exception as ex:
        print(ex)


if __name__ == '__main__':
    main()
