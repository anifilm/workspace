interface ProductDropdown {
  value: string;
  selected: boolean;
}

interface StockDropdown {
  value: number;
  selected: boolean;
}

interface AddressDropdown {
  value: { city: string; zipCode: string };
  selected: boolean;
}

interface Dropdown<T> {
  value: T;
  selected: boolean;
}

// 드롭다운 유형별로 각각의 인터페이스를 연결
var product: ProductDropdown;
var stock: StockDropdown;
var address: AddressDropdown;

// 드롭다운 유형별로 하나의 제네릭 인터페이스를 연결
var product: Dropdown<string>;
var stock: Dropdown<number>;
var address: Dropdown<{ city: string; zipcode: string }>;
