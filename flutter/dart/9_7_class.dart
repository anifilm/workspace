// Class

class Vehicle {
  String model;
  int year;

  Vehicle(this.model, this.year) {
    print('-> used default constructor');
    print(this.model);
    print(this.year);
  }

  void showOutput() {
    print('-> used base showOutput');
    print(model);
    print(year);
  }
}

class Car extends Vehicle {
  double price;

  Car(String model, int year, this.price) : super(model, year);

  void showOutput() {
    super.showOutput();
    print('-> used extends showOutput');
    print(this.price);
  }
}

void main() {
  var car1 = Car('Accord', 2014, 150000);
  car1.showOutput();
}
