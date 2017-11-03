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

// console.log('==================xx');

// function pet(words){
//     this.words=words;
//     this.speak=function(){

//         console.log(this.words);

//     }

// }
// var cat=new pet('miao!');
// cat.speak();

// var pet= {
//   words:'pet words',
//   speak:function(say){
//       console.log(say+this.words)
//   }
// }

// var dog={                 //函数调用之call（）调用，人为地把this绑定到dog，通过call（）改变执行上下文

//     words:'I am a dog.'
// }
// pet.speak.call(dog,'dog say:')

// call/apply()继承
// function animal(words){
//     this.words=words;
//   this.speak=function(words){
//         console.log(this.words)
//     }
// }

// var dog=function(words){
//       animal.call(this,words);
// }
// var DOG=new dog('dogge!');
// DOG.speak();
// var arr=new Array(100);
// arr[0]=1;
// arr[1]=1;
// for(var i=2;i<100;i++)
// {
//     arr[i]=arr[i-1]+arr[i-2];

// }
// for(let i=0;i<100;i++)
// console.log(arr[i]);