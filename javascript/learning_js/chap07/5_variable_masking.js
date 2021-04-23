// 7.5 변수 숨기기

{
  // block 1
  const x = 'blue';
  console.log(x); // "blue"
}
console.log(typeof x); // "undefined"; x는 스코프 밖에 있습니다.
{
  // block 2
  const x = 3;
  console.log(x); // 3
}
console.log(typeof x); // "undefined"; x는 스코프 밖에 있습니다.

// 스코프가 중첩되는 경우
{
  // 외부 블록
  let x = 'blue';
  console.log(x); // "blue"
  {
    // 내부 블록
    let x = 3;
    console.log(x); // 3
  }
  console.log(x); // "blue"
}
console.log(typeof x); // "undefined"; x는 스코프에 있지 않습니다.

/*
위 예제는 변수 숨김(variable masking)을 잘 보여 줍니다. 내부 블록의 x는 외부 블록에서
정의한 x와는 이름만 같을 뿐 다른 변수이므로 외부 블록의 x는 내부 블록의 x에 의해 가려지게
됩니다.

다음 예제를 보면 더 자세히 알 수 있습니다.
*/

{
  // 외부 블록
  let x = { color: 'blue' };
  let y = x; // y와 x는 같은 객체를 가리킵니다.
  let z = 3;
  {
    // 내부 블록
    let x = 5; // 이제 바깥의 x는 가려졌습니다.
    console.log(x); // 5
    console.log(y.color); // "blue"; y가 가리키는 외부 스코프의 x가 가리키는 객체는 스코프 안에 있습니다.
    y.color = 'red';
    console.log(z); // 3; z는 가려지지 않았습니다.
  }
  console.log(x.color); // "red"; 객체는 내부 스코프에서 수정되었습니다.
  console.log(y.color); // "red"; x와 y는 같은 객체를 가리킵니다.
  console.log(z);       // 3
}
