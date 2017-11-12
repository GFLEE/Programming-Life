var http = require("http");
var Promise=require('Promise')
var cheerio = require("cheerio");
var url = "http://www.imooc.com/learn/348";
function filter(html) {
  var $ = cheerio.load(html);
  var chapters=$('.chapter');


  console.log(chapters)
  var courseData=[]
  chapters.each(function(item){

    var chapter=$(this);
    var chapterTitle=chapter.find('strong').text()
    var videos=chapter.find('.video').children('li')

    var chapterData={
        chapterTitle:chapterTitle,
        videos:[]
    }
 videos.each(function(){
     var video=$(this).find(".J-media-item")
         var videoTitle=video.text()
          var id=video.parent().attr('data-media-id')
          // ('href').split('video/')[1]   
       chapterData.videos.push({
           title:videoTitle,
           id:id

       })
 })

 courseData.push(chapterData)
  })

return courseData;

}
;
function Trim(str)

         { 

             return str.replace(/(^\s*)|(\s*$)/g, ""); 

     }
;
function printCourseData(courseData){
courseData.forEach(function(item){
    var chapterTitle=item.chapterTitle
    console.log(chapterTitle+'\n')
    item.videos.forEach(function(video)
{
     var videoTitle='['+video.id+']'+Trim(video.title)+'\n'
     console.log(videoTitle)

})
})
}


function getPage(url)
{
  return new Promise(function(resolve,reject){

    console.log('crawling pages......')

    http.get(url, function(res) {
      var html = " ";
      res.on("data", function(data) {
        html += data;
      });
      res.on("end", function() {
         
        resolve(html);

         console.log(html)
        // var courseData=filter(html);
  
        // printCourseData(courseData);
  
      });
    }).on("error", function(e) {
      reject(e);
      console.log("error accured.");
    });
  })




}

getPage(url)


  
