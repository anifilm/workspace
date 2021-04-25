// 9.2.6 다형성

class Vehicle {
  constructor() {
    this.passengers = [];
    console.log('Vehicle created');
  }
  addPassenger(p) {
    this.passengers.push(p);
  }
}

class Motorcycle extends Vehicle {}

const c = new Car();
const m = new Motorcycle();

c instanceof Car; // true
c instanceof Vehicle; // true
m instanceof Car; // false
m instanceof Motorcycle; // true
m instanceof Vehicle; // true
