from bs4 import BeautifulSoup
from pprint import pprint
import requests

html = requests.get('https://comic.naver.com/webtoon/weekday')
soup = BeautifulSoup(html.text, 'html.parser')
html.close()

data1 = soup.find('div', {'class': 'col_inner'})
#pprint(data1)

data2 = data1.findAll('a', {'class': 'title'})
#pprint(data2)

title_list = []
for title in data2:
    title_list.append(title.text)

pprint(title_list)
