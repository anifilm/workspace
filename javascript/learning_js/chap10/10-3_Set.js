// 10.3 셋

// 셋은 중복을 허용하지 않는 데이터 집합

// Set 인스턴스 생성
const roles = new Set();

// add() 메서드를 사용하여 사용자 역할을 추가
roles.add('User'); // Set [ "User" ]

// 이 사용자에게 관리자 역할을 추가하려면 add() 메서드를 다시 호출
roles.add('Admin'); // Set [ "User", "Admin" ]

// Map과 마찬가지로 Set에도 size 프로퍼티 사용 가능
roles.size; // 2

// 추가하려는 내용이 셋에 이미 있는지 확인이 필요치 않다. (중복 없음)
// 이미 있다면 아무 일도 일어나지 않는다.
roles.add('User'); // Set [ 'User', 'Admin' ]
roles.size; // 2

// 역할 제거시 delete() 메서드를 사용
// 제거 성공시 true 반환, 그렇지 않다면 false를 반환
roles.delete('Admin'); // true
roles; // Set [ "User" ]
roles.delete('Admin'); // false
