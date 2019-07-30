using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassesBasics3
{
    class Program
    {
        static void Main(string[] args)
        {
            Human denis = new Human(29, "Denis", "Panjuta", "green");
            denis.IntroduceMyself();

            Human frank = new Human(35, "Frank", "TheTank", "awesome");
            frank.IntroduceMyself();

            Console.ReadKey();
        }
    }
}
