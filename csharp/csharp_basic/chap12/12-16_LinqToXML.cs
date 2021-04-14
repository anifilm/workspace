using System;
using System.Linq;
using System.Xml.Linq;

// 익명 객체 사용
string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=1150061500";
XElement xElement = XElement.Load(url);
var xmlQuery = from item in xElement.Descendants("data")
               select new {
                   Hour = item.Element("hour").Value,
                   Day = item.Element("day").Value,
                   Temp = item.Element("temp").Value,
                   WdKor = item.Element("wdKor").Value,
                   WfKor = item.Element("wfKor").Value,
                   Tmn = item.Element("tmn").Value,
                   Tmx = item.Element("tmx").Value
               };

foreach (var item in xmlQuery) {
    Console.Write(item.Hour + "\t");
    Console.Write(item.Day + "\t");
    Console.Write(item.Temp + "\t");
    Console.Write(item.WdKor + "\t");
    Console.Write(item.WfKor + "\t");
    Console.Write(item.Tmn + "\t");
    Console.Write(item.Tmx + "\t");
    Console.WriteLine();
}
