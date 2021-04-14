using System;
using System.Xml.Linq;

// 웹에서 XML 가져오기
string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=1150061500";
XElement xElement = XElement.Load(url);
Console.WriteLine(xElement);
