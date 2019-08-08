using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Enums
{
    enum Day { Mo, Tu, We, Th, Fr, Sa, Su };
    enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul = 12, Aug, Sep, Oct, Nov, Dec };

    class Program
    {
        static void Main(string[] args)
        {
            Day fr = Day.Fr;
            Day su = Day.Su;

            Console.WriteLine(fr);
            Console.WriteLine(su);

            Day a = Day.Fr;

            Console.WriteLine(fr == a);

            Console.WriteLine(Day.Mo);
            Console.WriteLine((int)Day.Mo);

            Console.WriteLine((int)Month.Feb);
            Console.WriteLine((int)Month.Aug);

            Console.ReadKey();
        }
    }
}
