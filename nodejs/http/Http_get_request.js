
var http=require('http')
var querystring=require('querystring')

var postData=querystring.stringify({
  'content':'Test from client.',
  'mid':8837

})

var option={
  hostname:'www.imooc.com',
  port:80,
  path:'/course/docomment',
  method:'POST',
  headers:{
'Accept':'application/json, text/javascript, */*; q=0.01',
'Accept-Encoding':'gzip, deflate',
'Accept-Language':'en-GB,en;q=0.9,zh-CN;q=0.8,zh;q=0.7',
'Connection':'keep-alive',
'Content-Length':postData.length,
'Content-Type':'application/x-www-form-urlencoded; charset=UTF-8',
'Cookie':'imooc_uuid=58e2b960-57c9-4d13-a309-b9c5f68ef8e7; imooc_isnew_ct=1500457448; loginstate=1; apsid=RiN2NmYTMxZTYyMzA3MTIyNzNlYWZlOTdhNWY4MzUAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAANTYxMTU1MQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABsZWVncmFkeWxsbEBHbWFpbC5jb20AAAAAAAAAAAAAADNkNDNhNTc1YzNkNjMzMjhkODc4NThlODJmZDk4MzI0fhnzWX4Z81k%3DMj; PHPSESSID=lddq0bkl8nd43q9im3j3lr0o85; IMCDNS=0; Hm_lvt_f0cfcccd7b1393990c78efdeebff3968=1509782504,1509968842,1510030839,1510034626; Hm_lpvt_f0cfcccd7b1393990c78efdeebff3968=1510034659; imooc_isnew=2; cvde=5a014cbcaa458-15',
'Host':'www.imooc.com',
'Origin':'http://www.imooc.com',
'Referer':'http://www.imooc.com/video/8837',
'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/62.0.3202.75 Safari/537.36',
'X-Requested-With':'XMLHttpRequest'
  }
}

var req=http.request(option,function(res){

       console.log('STATUS:'+res.statusCode)

       console.log('Headers:'+JSON.stringify(res.headers))

       res.on('data',function(chunk){
         console.log("isBuffer:"+Buffer.isBuffer(chunk))
         console.log("type of chunk: "+typeof chunk)
          
       })
   
       res.on('end',function(){
  
       console.log('POST finish')       

       })
       
       res.setEncoding('UTF8')
      
})

req.on('error',function(error){
  console.log('error:'+error.message)
})
 req.write(postData)
 req.end()