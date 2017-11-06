// events模块事件监听

var events = require("events"); //获取event模块
var EventEmitter = events.EventEmitter;  //得到EVentEmitter对象
var main = new EventEmitter();            //将该对象实例化
main.on("trigg", function(pram) {        //绑定事件监听，回调函数，trigg事件被触发
  console.log("hello," + pram);
});
main.on("trigg", function(pram) {        //绑定事件监听，回调函数，trigg事件被触发
    console.log("hello," + pram);
  });main.on("trigg", function(pram) {        //绑定事件监听，回调函数，trigg事件被触发
    console.log("hello," + pram);
  });
  main.on("trigg", function(pram) {        //绑定事件监听，回调函数，trigg事件被触发
    console.log("hello," + pram);
  });
  main.on("trigg", function(pram) {        //绑定事件监听，回调函数，trigg事件被触发
    console.log("hello," + pram);
  });
  main.on("trigg", function(pram) {        //绑定事件监听，回调函数，trigg事件被触发
    console.log("hello," + pram);
  });
  main.removeAllListeners('trigg');
 console.log(main.listenerCount('trigg'))
main.emit("trigg", 'Lee');
