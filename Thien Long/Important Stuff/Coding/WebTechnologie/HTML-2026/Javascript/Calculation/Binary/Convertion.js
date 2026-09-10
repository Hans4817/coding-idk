const binaryText = document.getElementById("binary");
const decimalText = document.getElementById("decimal");

let decimalInput = parseInt(window.prompt("Geben Sie Dezimalzahl ein: "));


// if(decimalInput >= 1024) console.error("Error while passing value: decimal input is over 1024.");

let array = {};
for(let i = 10; i >= 0; i--) { // initialize array for pow(2, 1) till pow(2, 10)
    array[i] = Math.pow(2, i);
}

let bits = {};

let i = 10;
while(decimalInput > 0 && i != 0) {
    if(decimalInput >= array[i]) {
        bits[i] = 1;

        decimalInput -= array[i];
    }
    else {
        bits[i] = 0;
    }
    i--;
}

console.log(bits);