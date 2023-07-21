// 1. 타입 별칭으로 API 함수의 응답 형태를 정의
type User = {
  id: string;
  name: string;
};

function fetchData(): User {
  return axios.get('http://localhost:3000/users/1');
}


// 2. 인터페이스로 API 함수의 응답 형태를 정의
interface User {
  id: string;
  name: string;
}

function fetchData(): User {
  return axios.get('http://localhost:3000/users/1');
}
