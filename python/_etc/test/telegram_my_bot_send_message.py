from dotenv import load_dotenv
import os
import telegram
import asyncio

load_dotenv()


async def send_message(message="텔레그램 메시지 테스트", send_url="http://example.com"):
    try:
        token = os.environ.get("TelegramToken")
        bot = telegram.Bot(token)
        chat_id_bot1 = "7011657775"
        chat_id_bot2 = "-1002464227122"
        new_message = message + "\n\n" + send_url
        await bot.send_message(chat_id=chat_id_bot1, text=new_message)
    except Exception as ex:
        print(ex)


#asyncio.run(send_message())
asyncio.get_event_loop().run_until_complete(send_message())
