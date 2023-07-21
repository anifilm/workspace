interface StringArray {
  [index: number]: string;
}

const companies: StringArray = ['삼성', '네이버', '구글'];

console.log(companies[0]); // 삼성
console.log(companies[1]); // 네이버
