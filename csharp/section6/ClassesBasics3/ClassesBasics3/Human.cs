using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassesBasics3
{
    // add two more member variables to "Human". eyeColor and age.
    // adjust the constructor, so it requires all of the four values to be used, when creating an object of Human.
    // create two objects of type Human.

    // this class is a blueprint for a datatype 
    class Human
    {
        // member variable
        private int age;
        private string firstName;
        private string lastName;
        private string eyeColor;

        // parameterized constructor
        public Human(int theAge, string firstName, string lastName, string eyeColor)
        {
            age = theAge;
            this.firstName = firstName;
            this.lastName = lastName;
            this.eyeColor = eyeColor;
        }

        // member method
        public void IntroduceMyself()
        {
            Console.WriteLine("Hi, I'm {0} {1} and {2} years old. My eye color is {3}", firstName, lastName, age, eyeColor);
        }
    }
}
