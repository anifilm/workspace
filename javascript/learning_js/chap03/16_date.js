// 3.16 날짜

/*
자바스크립트의 날짜와 시간은 내장된 Date 객체에서 담당합니다. Date 객체는 자바스크립트에서 불만스러운
부분 중 하나입니다. Date 객체는 원래 자바에서 가져온 겁니다. ('자바'스크립트가 자바와 연관된 몇 안되는
부분 중 하나입니다.) Date 객체는 사용하기 어려운 편이고, 특히 타임존이 다른 날짜를 다룰 때는 매우 어렵
습니다.
*/

// 현재 날짜와 시간을 나타내는 객체를 만들 때는 new Date()를 사용합니다.
const new = new Date();
now; // Fri Dec 16 2016 09:20:16 GMT+0900 (KST)

// 특정 날짜에 해당하는 객체를 만들 때는 다음과 같이 합니다.
const halloween = new Date(2016, 9, 31); // 월은 0에서 시작합니다. 즉 9는 10월 입니다.

// 특정 날짜와 시간에 해당하는 객체를 만들 때는 다음과 같이 합니다.
const halloweenParty = new Date(2016, 9,31, 19, 0); // 19:00 = 7:00 pm

// 날짜 객체를 만들면 다음과 같이 각 부분을 가져올 수 있습니다.
halloweenParty.getFullYear();     // 2016
halloweenParty.getMonth();        // 9
halloweenParty.getDate();         // 31
halloweenParty.getDay();          // 1 (월요일입니다. 0은 일요일입니다.)
halloweenParty.getHours();        // 19
halloweenParty.getMinutes();      // 0
halloweenParty.getSeconds();      // 0
halloweenParty.getMilliseconds(); // 0
