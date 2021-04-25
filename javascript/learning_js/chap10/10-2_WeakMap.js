// 10.2 위크맵

/*
WeakMap와 Map의 차이점
 - 키는 반드시 객체
 - WeakMap의 키는 가비지 콜렉셔에 포함될 수 있다.
 - WeakMap은 이터러블이 아니며 clear() 메서드가 없다.

일반적으로 자바스크립트는 코드 어딘가에서 객체를 참조하는 한 그 객체를 메모리에 계속
유지한다.
예를 들어 Map의 키인 객체 o가 있다면,
자바스크립트는 Map이 존재하는 한 o를 메모리에 계속 유지한다.
WeakMap은 그렇지 않다. 따라서 WeakMap은 이터러블이 될 수 없다.
가비지 콜렉션 중인 객체를 노출할 위험이 너무 크기 때문
*/

// WeakMap의 이런 특징은 객체 인스턴스의 전용(private) 키를 저장하기에 적절하다.
const SecretHolder = (function () {
  const secrets = new WeakMap();
  return class {
    setSecret(secret) {
      secrets.set(this, secret);
    }
    getSecret() {
      return secrets.get(this);
    }
  }
})();

/*
위의 예제에서는 WeakMap과 그 위크맵을 사용하는 클래스를 함께 '즉시 실행 함수'에 넣었다.
'즉시 실행 함수' 외부에서는 그 인스턴스에 비밀스런 내용을 저장할 수 있는 SecretHolder
클래스를 얻게 된다.
비밀을 저장할 때는 setSecret 메서드를 사용해야만 하고, 보려 할 때는 getSecret 메서드
를 사용해야만 한다.
*/

const a = new SecretHolder();
const b = new SecretHolder();

a.setSecret('secret A');
b.setSecret('secret B');

a.getSecret(); // "secret A"
b.getSecret(); // "secret B"
