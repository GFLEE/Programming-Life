
var http=require('http');   //define a http module,core module


var server=http.createServer(function(req,res){      //use http to define a server

res.writeHead(200,{'Content-Type':'text/plain'});     //response head/text type

res.end('<h>Hello World!<br>This is a http_server created by js.</h>');                          //response content
});

server.listen(2025,'127.0.0.1');                  //server listen at 127.0.0.1:1996
console.log('server running at http://127.0.0.1:2025');   //windows cmd console