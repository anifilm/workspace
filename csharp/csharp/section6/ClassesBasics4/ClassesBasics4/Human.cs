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

        // default constructor
        public Human()
        {
            Console.WriteLine("Constructor called. Object created");
        }

        public Human(string firstName)
        {
            this.firstName = firstName;
        }

        public Human(string firstName, string lastName)
        {
            this.firstName = firstName;
            this.lastName = lastName;
        }

        public Human(string firstName, string lastName, string eyeColor)
        {
            this.firstName = firstName;
            this.lastName = lastName;
            this.eyeColor = eyeColor;
        }

        public Human(int age, string firstName, string lastName)
        {
            this.age = age;
            this.firstName = firstName;
            this.lastName = lastName;
        }

        // parameterized constructor
        public Human(int age, string firstName, string lastName, string eyeColor)
        {
            this.age = age;
            this.firstName = firstName;
            this.lastName = lastName;
            this.eyeColor = eyeColor;
        }

        // member method
        public void IntroduceMyself()
        {
            if (age != 0 && firstName != null && lastName != null && eyeColor != null)
                Console.WriteLine("Hi, I'm {0} {1} and {2} years old. My eye color is {3}", firstName, lastName, age, eyeColor);
            else if (age != 0 && firstName != null && lastName != null)
            {
                Console.WriteLine("Hi, I'm {0} {1} and {2} years old", firstName, lastName, age);
            }
            else if (firstName != null && lastName != null && eyeColor != null)
            {
                Console.WriteLine("Hi, I'm {0} {1}. My eye color is {2}", firstName, lastName, eyeColor);
            }
            else if (firstName != null && lastName != null)
            {
                Console.WriteLine("Hi, I'm {0} {1}", firstName, lastName);
            }
            else if (firstName != null)
            {
                Console.WriteLine("Hi, I'm {0}", firstName);
            }
            else
            {
                Console.WriteLine("Hi");
            }
        }
    }
}
