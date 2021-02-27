// 6.3.2 매개 변수 해체 (확산 연산자(...) 사용)
function addPrefix(prefix, ...words) {
    // 나중에 더 좋은 방법을 배웁니다.
    const prefixedWords = [];
    for (let i = 0; i < words.length; i++) {
        prefixedWords[i] = prefix + words[i];
    }
    return prefixedWords;
}

addPrefix("con", "verse", "vex");  // ["converse", "convex"]

/*
함수를 선언할 때 확산 연산자는 반드시 마지막 매개변수여야 합니다.

NOTE_ ES5에서는 함수 바디 안에서만 존재하는 특별한 변수 arguments를 사용해서 확산과 비슷한 일을 할 수 있습니다.
      arguments는 실제 배열이 아니라 배열 비슷한 객체이므로 특별 취급하거나 일반적인 객체로 변환해야 했습니다.
      ES6에서는 확산 매개변수를 사용해 이런 약점을 해결했으므로 arguments보다 확산 매개변수를 쓰는 것이 좋습니다.
*/
