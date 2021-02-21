class Animal {
    /** @param {string} name */
    constructor(name){
        this.name = name;
    }

    eat(){
        return "eats food";
    }
}

class Cat extends Animal {
    meow(){
        return "meow";
    }
}

//sample usage
const tom = new Cat("Tom");
console.log(tom.eat());
console.log(tom.meow());
