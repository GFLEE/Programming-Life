var arr=Buffer.alloc(10)
console.log(arr)

var arr2=Buffer.allocUnsafe(10)
console.log(arr2)

var arr3=Buffer.from([1,2,3,4,5])
console.log(arr3)
var arr_3=arr3.toString()
console.log(arr_3)

var arr4=Buffer.from('Hello World')
console.log(arr4)
var arr_4=arr4.toString()
console.log(arr_4)
 
var assert=require('assert')
var obj1={
    a:{
        b:1
    }
};
var obj2={
    a:{
        b:2
    }
};
var obj3=Object.create(obj1) //object方法用于指定原型对象和属性创建新对象
// var equ=assert.deepEqual(obj1,obj2)   // 抛出错误b属性不同
// assert.deepEqual(obj1,obj3) // 不测试原型

var obj4={
    a:{
        b:1
    }
};
var obj5={
    a:{
        b:'1'
    }
};

assert.deepEqual(obj4,obj5)   //no error
// assert.deepStrictEqual(obj4,obj5)  //AssertionError: { a: { b: 1 } } deepStrictEqual { a: { b: '1' } }


var date=new Date()
console.log(date)

var object={}
assert.deepEqual(date,object)      //


// function ha(a,b)
// {
//     if(a===b){
//         return true
//     }
//     return false
// }

// console.log(ha(1,'1'))

// assert.doesNotThrow(        //doc example
//     () => {
//       throw new TypeError('错误信息');
//     },
//    TypeError,
//    '抛出错误'
//   );


// assert.doesNotThrow(function(err,mess){    //如果抛出错误且错误类型与 error 参数指定的相同，则抛出 AssertionError。 如果错误类型不相同，或 error 参数为 undefined，则抛出错误。
                                           //如果抛出了 AssertionError 且有给 message 参数传值，则 message 参数的值会被附加到 AssertionError 的信息中：
//    throw new TypeError('new eeror')
// },TypeError,'throw err')

// assert.ifError(new Error()); //抛出error

assert.ok(0)