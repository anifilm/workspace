// 12.2.1 yield 표현식과 양방향 통신

/*
제너레이터와 호출자 사이에서 양방향 통신이 가능하다. 통신은 yield 표현식을 통해 이뤄진다.
표현식은 값을 평가되고 yield는 표현식이므로 반드시 어떤 값으로 평가된다.
yield 표현식의 값은 호출자가 제너레이터의 이터레이터에서 next를 호툴할 때 제공하는
매개변수이다.

다음은 대화를 이어가는 제너레이터 예제이다.
*/
function* interrogate() {
  const name = yield 'What is your name?';
  const color = yield 'What is your favorite color?';
  return `${name}'s favorite color is ${color}.`;
}

/*
위 제너레이터를 호출하면 이터레이터를 얻는다.
아직은 제너레이터의 어떤 부분도 실행하지 않은 상태이다.
next를 호출하면 제너레이터는 첫 번째 행을 실행하려 한다. 하지만 그 행에는 yield 표현식
이 들어 있으므로 제너레이터는 반드시 제어권을 호출자에게 넘겨야 한다.
제너레이터 첫 번째 행이 완료(resolve)되려면 호출자가 next를 다시 호출해야 한다.
그러면 name은 next에서 전달하는 값을 받는다.

다음은 이 제너레이터를 끝까지 실행한 예제이다.
*/

const it = interrogate();
it.next(); // { value: 'What is your name?', done: false }
it.next('Ethan'); // { value: 'What is your favorite color?', done: false }
it.next('orange'); // { value: "Ethan's favorite color is orange.", done: true }

// 다음 예제는 이 제너레이터를 실행했을 때 일어나는 일을 표사한 것이다.
// 1. 제너레이터는 이터레이터를 반환(return)하고 일시 정지한 상태로 시작한다.
function* interrogate() {                             // let it = interrogate();
  const name = yield 'What is your name?';            // it.next();
  const color = yield 'What is your favorite color?'; // it.next('Ethan');
  return `${name}'s favorite color is ${color}.`;     // it.next('orange);
}

// 2. undefined를 제너레이터에 넘긴다.(이 값은 사용되지 않는다)
// 제너레이터는 "What is your name?"을 넘기고(yield) 일시 정지한다.
function* interrogate() {                             // let it = interrogate();
  const name = yield 'What is your name?'; // ---------> it.next();
  const color = yield 'What is your favorite color?'; // it.next('Ethan');
  return `${name}'s favorite color is ${color}.`;     // it.next('orange);
}

// 3. "Ethan"을 제너레이터에 넘긴다.
// 제너레이터는 "What is your favorite color?"를 넘기고 일시 정지한다.
function* interrogate() {                                // let it = interrogate();
  const name = yield 'What is your name?'; // <──────────────────────┐
  const color = yield 'What is your favorite color?'; //--> it.next('Ethan');
  return `${name}'s favorite color is ${color}.`;        // it.next('orange);
}

// 4. "orange"를 제너레이터에 넘긴다.
// 제너레이터는 "Ethan's favorate color is orange"를 반환하고 멈춘다.
function* interrogate() {                                // let it = interrogate();
  const name = yield 'What is your name?';               // it.next();
  const color = yield 'What is your favorite color?'; // <────────────┐
  return `${name}'s favorite color is ${color}.`; // -----> it.next('orange);
}

/*
위 예제를 통해 제너레이터를 활요하면 호출자가 함수의 실행을 제거할 수 있어서 아주 유용하게 사용할 수 있다는 것을
알수 있다. 호출자가 제너레이터에 정보를 전달하므로, 제너레이터는 그 정보에 따라 자신의 동작 방식 자체를 바꿀 수 있다.
*/

/*
NOTE_ 제너레이터는 화살표 표기법으로 만들 수 없으며 반드시 function*을 사용해야 한다.
*/
