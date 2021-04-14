using System;
using System.Linq;
using System.Xml.Linq;

// data 태그 추출
string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=1150061500";
XElement xElement = XElement.Load(url);
var xmlQuery = from item in xElement.Descendants("data")
               select item;

foreach (var item in xmlQuery) {
    Console.WriteLine(item);
}
