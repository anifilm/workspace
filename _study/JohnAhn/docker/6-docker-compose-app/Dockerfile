# 베이스 이미지 지정
FROM node:10

WORKDIR /usr/src/app

# 현재 폴더의 package.json을 컨테이너에 복사
COPY package.json ./

RUN npm install

# 현재 폴더의 모든 파일들을 컨테이너에 복사
#COPY ./ ./

# 서버 구동에 필요한 파일을 컨테이너에 복사
COPY server.js ./

# 컨테이너 시작시 실행 될 명령을 명시
CMD ["node", "server.js"]
