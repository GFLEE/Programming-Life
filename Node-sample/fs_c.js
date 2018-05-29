var fs=require('fs')
fs.readFile('node.png',function(err,origin){
      
     console.log(origin)

fs.writeFile('node_copy.png',origin,function(err){
    if(err)
    console.log(err)
})

// var node_base64=origin.toString('base64')
// // console.log(node_base64)

// fs.writeFile('node_copy.png',node_base64,function(err){
//     if(err)
//     console.log(err)
//     console.log(node_base64)
// })


// fs.readFile('node_copy.png',function(err,nodeCopy){
//     if(err)
//     console.log(err);

//     var copy_buffer=new Buffer(nodeCopy,'base64')
    
    
//     fs.writeFile('node_copy.png',copy_buffer,function(err){
//         if(err)
//         console.log(err)
//     })


// })








})



