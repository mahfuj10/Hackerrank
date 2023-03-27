/*
 * Return a count of the total number of objects 'o' satisfying o.x == o.y.
 * 
 * Parameter(s):
 * objects: an array of objects with integer properties 'x' and 'y'
 */
function getCount(objects) {
    let arr = [];
    for(let i = 0; i<objects.length; i ++){
        let element = objects[i];
        if(element.x == element.y){
            arr.push(element);
        }
    }
    return arr.length;
}

