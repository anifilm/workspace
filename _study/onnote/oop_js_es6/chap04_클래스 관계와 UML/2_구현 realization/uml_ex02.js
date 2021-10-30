class ICoffee {
  constructor() {

  }

  getName() {
    throw new Error('You have to implement the method doSomething!');
  }

  setName(name) {
    throw new Error('You have to implement the method doSomething!');
  }

  display() {
    throw new Error('You have to implement the method doSomething!');
  }
}

// ICoffee를 구현한다.
class Espresso extends ICoffee {
  constructor() {
    super();

    this.name = 'Espresso';
  }

  getName() {
    return this.name;
  }

  setName(name) {
    this.name = name;
  }

  display() {
    console.log(this.name);
  }
}

let espresso = new Espresso();

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso
