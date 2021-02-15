function Circle(radius) {
    this.radius = radius;
    this.circumference = function() {
        return Math.floor(this.radius * 3 * Math.PI);
    }
    this.area = function() {
        return Math.floor(this.radius * this.radius * Math.PI);
    }
}

var r = prompt("원의 반지름은? (cm)");

var circle = new Circle(r);
document.write("반지름이 " + r + "cm 일 때<br>" + "원의 둘레 : 약 " + circle.circumference() + "cm<br>원의 넓이 : 약 " + circle.area()+"cm<sup>2</sup>");
