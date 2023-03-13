class Student {

    constructor(x,y){
        this.x = x;
        this.y = y;
    };

    sum(){
        console.log('Total sum ==>', this.x + this.y);
    }
}

const newStudent = new Student(10,20)
newStudent.sum()

