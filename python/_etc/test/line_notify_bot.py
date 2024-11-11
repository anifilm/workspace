from dotenv import load_dotenv
import os
import requests

load_dotenv()


def send_message(message="라인 메시지 테스트"):
    try:
        api_url = "https://notify-api.line.me/api/notify"
        token = os.environ.get("LineToken")

        response = requests.post(
            api_url,
            headers={"Authorization": "Bearer " + token},
            data={"message": message},
        )
    except Exception as ex:
        print(ex)


send_message()
