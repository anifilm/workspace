/*
17.2 생성자 함수
17.2.1 객체 리터렁에 의한 객체 생성 방식의 문제점
객체 리터렁에 의한 객체 생성 방식은 직관적이고 간편하다. 하지만 객체 리터널에 의한 객체 생성 방식은 단 하나의 객체만 생성한다.
따라서 동일한 프로퍼티를 갖는 객체를 여러 개 생성해야 하는 경우 매번 같은 프로퍼티를 기술해야 하기 때무에 비효율적이다.
*/

const circle1 = {
  radius: 5,
  getDiameter() {
    return 2 * this.radius;
  }
};

console.log(circle1.getDiameter()); // 10

const circle2 = {
  radius: 10,
  getDiameter() {
    return 2 * this.radius;
  }
};

console.log(circle2.getDiameter()); // 20
