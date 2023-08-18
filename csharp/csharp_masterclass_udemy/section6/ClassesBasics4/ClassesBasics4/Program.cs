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

            Human amalia = new Human("Amalia", "Panjuta", "blue");
            amalia.IntroduceMyself();

            Human basicHuman = new Human();
            basicHuman.IntroduceMyself();

            Human natalie = new Human("Natalie");
            natalie.IntroduceMyself();

            Human michael = new Human("Michael", "Miller");
            michael.IntroduceMyself();

            Human frank = new Human(25, "Frank", "Walter");
            frank.IntroduceMyself();

            Console.ReadKey();
        }
    }
}
