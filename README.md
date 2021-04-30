# workspace

## git 설정하기

git config --global user.name "유저이름"

git config --global user.email "깃허브 메일주소"


## 폴더 생성

mkdir ~/myProject

cd ~/myProject


## git 명령어

git init						// 깃 명령어를 사용할 수 있는 디렉토리로 설정


git status						// 현재 상태 확인

git add [filename]				// 커밋 리스트에 파일 추가

git add .

git commit -m "설명"			    // 커밋 등록


git remote add origin https://github.com/...

git remote -v					// 연결 상태 확인


git push (origin master)		// 깃허브로 커밋 내용 보내기

git pull (origin master)		// 깃허브 변경된 내용 받기

git fetch (origin master)		// 깃허브 변경된 내용 받기 (merge)


## 저장소 복제

git clone https://github.com/...	// 현재 디렉로리에 저장소 폴더 생성 및 파일 복제
