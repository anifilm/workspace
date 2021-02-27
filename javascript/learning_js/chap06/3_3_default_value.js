// 6.3.3 매개변수 기본값

function f(a, b = "default", c = 3) {
    return `${a} - ${b} - ${c}`;
}

f(5, 6, 7); // "5 - 6 - 7"
f(5, 6);    // "5 - 6 - 3"
f(5);       // "5 - default - 3"
f();        // "undefined - default - 3"
