// In OOP, a class is a blueprint for creating objects. It defines the properties and methods that objects of that class will have.

class Student  {
    
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    greet(){
        console.log(`Hi, I'm ${this.name} and I'm ${this.age} years old.`);
    }
}

// create the class
const std = new Student('Mahfujur', 17)
std.greet() // Hi, I'm Mahfujur and I'm 17 years old.
