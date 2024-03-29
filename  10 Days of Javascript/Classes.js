/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */
class Polygon{
    constructor(side){
        this.side = side;
        this.perimeter = function(){
                 let total = 0;
        for(let i = 0; i < side.length; i ++){
            total += side[i] 
        }
        return total; 
        }
      
    }
}
