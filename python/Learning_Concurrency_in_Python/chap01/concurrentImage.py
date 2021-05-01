# 이미지 다운로드, 동시에 다운로드하기
import threading
import urllib.request
import time

def downloadImage(imagePath, fileName):
    print('Downloading Image from ', imagePath)
    urllib.request.urlretrieve(imagePath, fileName)
    print('Completed Download')

def executeThread(i):
    imageName = 'images/image-' + str(i) + '.jpg'
    downloadImage('http://placeimg.com/640/480/any', imageName)

def main():
    t0 = time.time()
    # 모든 스레드 형태를 저장하는 배열 생성
    threads = []

    # 10개의 스레드를 생성하고, 배열에 추가혀며, 실행해본다.
    for i in range(10):
        thread = threading.Thread(target=executeThread, args=(i,))
        threads.append(thread)
        thread.start()

    # 배열 내의 모든 스레드는 전체 종료 시간을 기록하기 전 모든 시행을 마친다.
    for i in threads:
        i.join()

    # 전체 실행 시간을 계산
    t1 = time.time()
    totalTime = t1 - t0
    print('Total Execution Time {}'.format(totalTime))

if __name__ == '__main__':
    main()
