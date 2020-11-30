using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace FileIO
{
    class Program
    {
        static void Main(string[] args)
        {
            // Method 1
            string[] lines = { "First 250", "Second 242", "Third 240" };

            File.WriteAllLines(@"..\..\highscores.txt", lines);

            // Method 2
            Console.WriteLine("Please give the file a name");
            string filename = Console.ReadLine();
            Console.WriteLine("Please enter the text for the file");
            string input = Console.ReadLine();
            File.WriteAllText(@"..\..\" + filename + ".txt", input);

            // Method 3
            using (StreamWriter file = new StreamWriter(@"..\..\myText.txt"))
            {
                foreach (string line in lines)
                {
                    if (line.Contains("2"))
                    {
                        file.WriteLine(line);
                    }
                }
            }

            using (StreamWriter file = new StreamWriter(@"..\..\myText2.txt", true))
            {
                file.WriteLine("Additional line");
            }
        }
    }
}
