using System;

namespace Datatypes2
{
    class Program
    {
        static void Main(string[] args)
        {
            string myname = "anifilm";

            string message = "My name is " + myname;

            string capsMessage = message.ToUpper();

            string lowerCaseMessage = message.ToLower();

            Console.WriteLine(message);
            Console.WriteLine(capsMessage);
            Console.WriteLine(lowerCaseMessage);
            Console.Read();
        }
    }
}
