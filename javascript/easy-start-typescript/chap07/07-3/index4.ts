interface Admin {
  role: string;
  department: string;
}

// 상속을 통한 인터페이스 확장
interface User extends Admin {
  id: string;
  name: string;
}

// 선언 병합을 통한 타입 확장
interface User {
  skill: string;
}
