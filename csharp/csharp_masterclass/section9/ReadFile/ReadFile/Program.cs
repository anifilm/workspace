using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ReadFile
{
    class Program
    {
        static void Main(string[] args)
        {
            // Reading Text from a File
            // exchange the address of the file with the one you want to use
            string text = System.IO.File.ReadAllText(@"..\..\textFile.txt");

            Console.WriteLine("Textfile contains the following text: \n{0}", text);

            // Receive the Text line be line
            string[] lines = System.IO.File.ReadAllLines(@"..\..\textFile.txt");

            Console.WriteLine("\nContent of the file line by line: ");
            foreach (string line in lines)
            {
                Console.WriteLine(line);
            }

            Console.Read();
        }
    }
}
