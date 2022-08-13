import os
from dotenv import load_dotenv

import win32com.client
import pythoncom


# 계정 정보 가져오기
load_dotenv()
id = os.environ.get("ID")
passwd = os.environ.get("PASSWD")
cert_passwd = os.environ.get("CERT_PASSWD")


class XASessionEventHandler:
    login_state = 0

    def OnLogin(self, code, msg):
        if code == "0000":
            print("로그인 성공")
            XASessionEventHandler.login_state = 1
        else:
            print("로그인 실패")


instXASession = win32com.client.DispatchWithEvents(
    "XA_Session.XASession", XASessionEventHandler
)


instXASession.ConnectServer("hts.ebestsec.co.kr", 20001)
instXASession.Login(id, passwd, cert_passwd, 0, 0)

while XASessionEventHandler.login_state == 0:
    pythoncom.PumpWaitingMessages()
