import urllib.request
import time
from bs4 import BeautifulSoup

linkArray = []

def getLinks():
    req = urllib.request.urlopen('http://www.example.com')
    soup = BeautifulSoup(req.read(), 'html.parser')
    for link in soup.findAll('a'):
        linkArray.append(link.get('href'))
        print(len(linkArray))

getLinks()
