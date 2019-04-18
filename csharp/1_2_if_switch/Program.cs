using System;

namespace _1_2_if_switch
{
    class Program
    {
       static void convert(ref string color) {
            switch(color) {

                case "Red": color = "빨강"; break;
                case "Green": color = "초록"; break;
                case "Blue": color = "파랑"; break;
                default: color = "알수 없는 색"; break;
            }
        }
        static void Main(string[] args)
        {
            string s = "Red";
            convert(ref s);
            Console.WriteLine(s);
        }
    }
}