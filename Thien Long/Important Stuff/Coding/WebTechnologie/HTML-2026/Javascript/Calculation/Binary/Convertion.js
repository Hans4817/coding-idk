const binaryText = document.getElementById("binary");
const decimalText = document.getElementById("decimal");

let decimalInput = parseInt(window.prompt("Geben Sie Dezimalzahl ein: "));
console.log(decimalInput);
if(decimalInput >= 1024) console.error("Error while passing value: decimal input is over 1024.");

let i = 10;
while(true) {
    //if(decimalInput)
}