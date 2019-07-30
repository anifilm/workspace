using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassesBasics2
{
    // create a public variable lastName of type string.
    // change the IntroduceMyself method, so it tells the whole name.
    // create two objects with full information about themself - firstName and lastName

    // this class is a blueprint for a datatype 
    class Human
    {
        // member variable
        private string firstName;
        private string lastName;

        // constructor
        public Human(string firstName, string lastName)
        {
            this.firstName = firstName;
            this.lastName = lastName;
        }

        // member method
        public void IntroduceMyself()
        {
            Console.WriteLine("Hi, I'm {0} {1}", firstName, lastName);
        }
    }
}
