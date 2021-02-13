function f(o) {
    o.message = "f에서 수정함";
    o = {
        message: "새로운 객체!"
    };
    console.log(`f 내부: o.message="${o.message}" (할당 후)`);
}

let o = {
    message: "초기 값"
};
console.log(`f를 호출하기 전: o.message="${o.message}"`);

f(o);
console.log(`f를 호출한 다음: o.message="${o.message}"`);

/*
NOTE_ 컴퓨터 과학에서는 자바스크립트의 원시 값을 값 타입(value type)이라고 말합니다. 원시 값을 전달 할 때
      값이 복사되기 때문입니다. 객체는 참조 타입(reference type)이라 부릅니다. 객체를 전달할 때 두 변수는
      같은 객체를 가리키기 때문입니다.
*/
