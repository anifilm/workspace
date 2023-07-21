type MyString = string;
type StringOrNumber = string | number;
//type Admin = Person & Developer;

// 제네릭
type Dropdown<T> = {
  id: string;
  title: T;
};

// 유틸리티 타입
type Admin = { name: string; age: number; role: string };
type OnlyName = Pick<Admin, 'name'>;

// 맵드 타입
type Picker<T, K extends keyof T> = {
  [P in K]: T[P];
};
