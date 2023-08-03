# .env 정보 가져옴
from dotenv import load_dotenv
import os
load_dotenv()

MYSQL_ID = os.environ.get("MYSQL_ID")
MYSQL_PW = os.environ.get("MYSQL_PW")

print(MYSQL_ID, MYSQL_PW)
