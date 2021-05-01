// 17.6 대체

const html = 'HTLM with <a href="/one">one link</a>, and some JavaScript.' + '<script src="stuff.js">';
const matches = html.match(/area|a|link|script|source/ig); // 첫 시도

/*
ig는 대소문자를 가리지 않고(i) 전체를(g) 검색하라는 뜻이다.
g 플래그가 없으면 일치하는 것 중 첫 번째만 반환
정규식의 내용은 '텍스트에서 area, a, link, script, source를 대소문자를 가리지 않고 모두 찾으라'라는 뜻이다.

area를 a보다 먼저 쓴 이유는 무엇일까?
정규식이 왼쪽에서 오른쪽으로 평가하기 때문. a를 area보다 먼저 쓰게 되면, 텍스트 안에 area가 있더라도 a를 먼저 소비하므로 남는 rea는 어느 것에도 일치하지 않게 된다.
이렇게 겹치는 것이 있을 때는 더 큰 것을 먼저 써야 한다.
*/
