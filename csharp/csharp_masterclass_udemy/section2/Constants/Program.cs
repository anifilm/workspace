using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Constants
{
    // Constants are immutable values which are known
    // at compile time and do not change for the life of the program.

    class Program
    {
        // constants as fields
        const double PI = 3.14159265359;
        const int weeks = 52, months = 12;

        // Create a constant of type string with your birthday as its value
        const string birthday = "1978.09.18";

        static void Main(string[] args)
        {
            Console.WriteLine("My birthday is always going to be: {0}", birthday);
        }
    }
}
