# 이미지 다운로드, 순차적으로 다운로드하기
import urllib.request
import time

def downloadImage(imagePath, fileName):
    print('Downloading Image from ', imagePath)
    urllib.request.urlretrieve(imagePath, fileName)

def main():
    t0 = time.time()
    for i in range(10):
        imageName = 'images/image-' + str(i) + '.jpg'
        downloadImage('http://placeimg.com/640/480/any', imageName)

    t1 = time.time()
    totalTime = t1 - t0
    print('Total Execution Time {}'.format(totalTime))

if __name__ == '__main__':
    main()
