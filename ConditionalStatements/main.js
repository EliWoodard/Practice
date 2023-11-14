let x = 5;

let y = 100;

// Rather simple but showcases an example of a while loop and if statement
while ((y % x) === 0) {
    console.log(y);

    if (y === 0) {
        break;
    } else if (x === y) {
        console.log("x equals y")
        y = y - 5;
    } else {
        y = y - 5;
    }
}

console.log("Now the switch statement");

y = 100;
let condition = y % x;

// Also a simple switch example
while (y !== 0) {
    switch(condition) {
        case 4:
            console.log("4 remainder");
        case 3:
            console.log("3 remainder");
        case 2:
            console.log("2 remainder");
        case 1:
            console.log("1 remainder");
        default:
            console.log("no remainder");
    }
    y--;
    condition = y % x;
}
