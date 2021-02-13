function getGreeting() {
    return "Hello, world!";
}

// 함수 식별자 뒤에 괄호를 쓰면 자바스크립트는 함수를 호출하려 한다고 이해하고, 함수 바디를 실행합니다.
// 그리고 함수를 호출한 표현식은 반환 값이 됩니다.
// 괄호를 쓰지 않으면 다른 값과 마찬가지로 함수를 참조하는 것이면, 그 함수는 실행되지 않습니다.
getGreeting();  // "Hello, world!"
getGreeting;    // function getGreeting()

console.log(getGreeting());


// 다른 이름으로 함수를 호출 (변수에 할당, 함수를 참조하는 것)
const f = getGreeting;
f();  // "Hello, world!"

console.log(f());


// 함수를 객체 프로퍼티에 할당
const o = {};
o.f = getGreeting;
o.f();  // "Hello, world!"

console.log(o.f());


// 배열 요소로 할당
const arr = [1, 2, 3];
arr[1] = getGreeting;  // arr은 이제 [1, function getGreeting(), 2] 입니다.
arr[1]();  // "Hello, world!"

console.log(arr[1]());


/*
마지막 예제를 보면 자바스크립트에서 괄호가 하는 일을 명확히 알 수 있을 겁니다. 값 뒤에 괄호를 붙이면 자바스크립트는
그 값을 함수로 간주하고 호출합니다. 이전 예제에서 arr[1]은 값이 되는 표현식입니다. 값 뒤에 괄호를 썼으므로 자바
스크립트는 이 값이 함수라고 간주하고 호출합니다.

NOTE_ 함수가 아닌 값 뒤에 괄호를 붙이면 에러가 납니다. 예를 들어 "whoops"()는 TypeError: "whoops" is not
      a function 에러를 일으킵니다.
*/
