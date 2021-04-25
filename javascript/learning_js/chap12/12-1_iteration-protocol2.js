// 12.1 이터레이션 프로토콜

// 이터레이션 프로토콜은 모든 객체를 이터러블(iterable) 객체로 바꿀 수 있다.

// 메시지에 타임스탬프를 붙이는 로그 클래스
class Log {
  constructor() {
    this.messages = [];
  }
  add(message) {
    this.messages.push({ message, timestamp: Date.now() });
  }
}

// 위의 클래스에 이터레이션 프로토콜 사용 (Symbol.iterator 메서드 추가)
class Log {
  constructor() {
    this.messages = [];
  }
  add(message) {
    this.messages.push({ message, timestamp: Date.now() });
  }
  [Symbol.iterator]() {
    return this.messages.values();
  }
}

// 이제 Log 인스턴스를 배열처럼 순회할 수 있다.
const log = new Log();
log.add('first day at sea');
log.add('spotted whale');
log.add('spotted another vessel');
//...

// 로그를 배열처럼 순회
for (let entry of log) {
  console.log(`${entry.message} @ ${entry.timestamp}`);
}

/*
위 예제에서는 messages 배열에서 이터레이터를 가져와 이터레이션 프로토콜을 구현했지만,
다음과 같이 직접 이터레이터를 만들 수도 있다.
*/

class Log {
  //...

  [Symbol.iterator]() {
    let i = 0;
    const messages = this.messages;
    return {
      next() {
        if (i >= messages.length) {
          return { value: undefined, done: true };
        }
        return { value: messages[i++], done: false };
      }
    }
  }
}
