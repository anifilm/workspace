// 여러 줄로 선언
const sam1 = {
    name: 'Sam',
    age: 4,
};

// 한 줄로 선언
const sam1 = { name: 'Sam', age: 4 };

const sam3 = {
    name = 'Sam',
    classification: {  // 프로퍼티 값도 객체가 될 수 있습니다.
        kindom: 'Anamalia',
        phylum: 'Chordata',
        class: 'Mamalia',
        order: 'Carnivoria',
        family: 'Felidae',
        subfamily: 'Felinae',
        genus: 'Felis',
        species: 'Catus',
    },
};

// sam3의 family에 접근하는 방법
sam3.classification.family;        // "Felidae"
sam3["classification"].family;     // "Felidae"
sam3.classification["family"];     // "Felidae"
sam3["classification"]["family"];  // "Felidae"
