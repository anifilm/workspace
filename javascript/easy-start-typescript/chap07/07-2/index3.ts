type ID = string;
//type Product = TShirt | Shoes;
//type Teacher = Person & Adult;

type Gilbut<T> = {
  book: T;
};

type MyBeer = Pick<Beer, 'brand'>;


interface Person {
  name: string;
  age: number;
}

type Adult = {
  old: boolean;
};

type Teacher = Person & Adult;
