var http = require("http");
var cheerio = require("cheerio");
var url = "http://course.casvot.com";
function filter(html) {
  var $ = cheerio.load(html);
  var topics = $(".entry-title");
  console(topics);
}
http
  .get(url, function(res) {
    var html = " ";
    res.on("data", function(data) {
      html += data;
    });
    res.on("end", function() {
      filter(html);
    });
  })
  .on("error", function() {
    console.log("error accured.");
  });
