using System;
using System.Linq;
using System.Xml.Linq;

// data 태그 내부에서 값 추출
string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=1150061500";
XElement xElement = XElement.Load(url);
var xmlQuery = from item in xElement.Descendants("data")
               select item;

foreach (var item in xmlQuery) {
    Console.Write(item.Element("hour").Value + "\t");
    Console.Write(item.Element("day").Value + "\t");
    Console.Write(item.Element("temp").Value + "\t");
    Console.Write(item.Element("wdKor").Value + "\t");
    Console.Write(item.Element("wfKor").Value + "\t");
    Console.Write(item.Element("tmn").Value + "\t");
    Console.Write(item.Element("tmx").Value + "\t");
    Console.WriteLine();
}
