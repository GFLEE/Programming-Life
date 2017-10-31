// function learn(something) {
//   console.log(something);
// }

// function we(callback, something) {
//   something += "better";
//   callback(something);
// }

// we(learn, "NodeJs");
// we(function(something) {
//   console.log(something);
// }, "666");

// // part 2
// var global = "this is global variable";
// function main(global) {
//   var global = "local variable";
//   console.log(global);
// }
// main();
// //
// console.log("========================================");
// var glo = "glo";

// function out() {
//   var loc = "loc";
//   console.log("=================");
//   console.log(inside);
//   console.log("=================");

//   function inside() {
//     var inside = "inside";
//     console.log(inside);
//     console.log(glo);
//     console.log(loc);
//   }

//   inside();
// }
// out();

// console.log("================================xx");
// function pet(words) {
//   this.words = words;
//   console.log(this.words);
//   console.log(this == global);
// }
// pet("................................")


console.log('==================xx');

function pet(words){
    this.words=words;
    this.speak=function(){

        console.log(this.words);

    }

}
var cat=new pet('miao!');
cat.speak();





