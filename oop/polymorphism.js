// Polymorphism is the ability of objects of different classes to be treated as if they were objects of the same class.

class Shape {
    draw(){
        console.log('Drawing shape...');
    }
}

class Circle extends Shape {
    draw(){
        console.log('Drawing circle...');
    }
}

class Sqare extends Shape {
    draw(){
        console.log('Drawing sqare...');
    }
}

function drawShape(shapes){
    for(const shape of shapes){
        shape.draw()
    }
}

const shapes = [
    new Circle(),
    new Sqare(),
]

drawShape(shapes)