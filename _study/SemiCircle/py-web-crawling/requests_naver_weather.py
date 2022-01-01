from bs4 import BeautifulSoup
from pprint import pprint
import requests

html = requests.get('https://search.naver.com/search.naver?query=날씨')
soup = BeautifulSoup(html.text, 'html.parser')
html.close()

data1 = soup.find('div', {'class': 'report_card_wrap'})
#pprint(data1)

data2 = data1.findAll('span')
#pprint(data2)

print('미세먼지', data2[0].text)
print('초미세먼지', data2[1].text)
print('자외선', data2[2].text)
print('일몰', data2[3].text)
