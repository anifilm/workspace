# Config parser
# - 프로그램의 실행 설정을 file에 저장
# - Section, Key, Value 값의 형태로 설정된 설정 파일을 사용
# - 설정 파일을 Dict type으로 호출 후 사용

import configparser

config = configparser.ConfigParser()
config.sections()

config.read('example.cfg')
config.sections()

for key in config['SectionOne']:
    print(key)

config['SectionOne']["status"]
