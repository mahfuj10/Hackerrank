// Encapsulation is the practice of hiding the internal details of an object and providing a public interface for interacting with it. This helps to prevent outside code from directly modifying the internal state of an object, which can lead to bugs and other issues. In JavaScript, we can use closures to achieve encapsulation.

const createCounter = () => {
    let count = 0;

    return {
        increment(){
            count++
        },

        decrement(){
            count--
        },

        getCount(){
            return count
        }
    }
}

const counter = createCounter()
counter.increment()
counter.increment()
counter.increment()
counter.decrement()
console.log(counter.getCount()); // 2
