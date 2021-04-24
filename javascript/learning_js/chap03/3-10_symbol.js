// 3.10 심볼

const RED = Symbol('The color of a sunset!');
const ORANGE = Symbol('The color of a sunset!');
RED === ORANGE; // false: 심볼은 모두 서로 다릅니다.

console.log(RED === ORANGE);

/*
심볼(symbol)은 유일한 토큰을 나타내기 위해 ES6에서 도입한 새 데이터 타입입니다. 심볼은 항상 유일합니다. 다른 어떤
심볼과도 일치하지 않습니다. 이런 면에서는 심볼은 객체와 유사합니다. 객체는 모두 유일합니다.
항상 유일하다는 점을 제외하면 심볼은 원시 값의 특징을 모두 가지고 있으므로 확장성 있는 코드를 만들 수 있습니다.

우연히 다른 식별자와 혼동해서는 안 되는 고유한 식별자가 필요하다면 심볼을 사용하십시오.
*/
