// Inheritance is the process of creating a new class based on an existing class. The new class, known as the subclass, inherits the properties and methods of the existing class, known as the superclass.

class Student  {
    
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    greet(){
        console.log(`Hi, I'm ${this.name} and I'm ${this.age} years old.`);
    }
}

class Person extends Student {

    constructor(name, age, desc) {
        super(name,age) // pass the parameter to Student class constructor
        this.desc = desc;
    }

    printDesc(){
        console.log(this.desc);
    }
}


const person = new Person('Olivia', 22,'Im description.')

person.greet() // Hi, I'm Olivia and I'm 22 years old.
person.printDesc() // Im description.
