var http = require('http');
var querystring=require('querystring')
http.get("http://www.weather.com.cn/data/sk/101040100.html", function(res) {
    var size = 0;
    var chunks = [];
  res.on('data', function(chunk){
      size += chunk.length;
      chunks.push(chunk);
  });
  res.on('end', function(){
      var data = Buffer.concat(chunks, size);
    
   
        console.log(data.toString())
  });
}).on('error', function(e) {
  console.log("Got error: " + e.message);
});