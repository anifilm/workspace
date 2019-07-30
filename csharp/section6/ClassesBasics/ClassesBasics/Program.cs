using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassesBasics
{
    class Program
    {
        static void Main(string[] args)
        {
            // Create an object of my class
            // an instance of Human
            Human sissy = new Human();
            // access public variavle from outside, and even change it
            sissy.firstName = "Sissy";
            sissy.lastName = "Wagner";
            // call methods of the class
            sissy.IntroduceMyself();

            Human franzl = new Human();
            franzl.firstName = "Franzl";
            franzl.lastName = "Muller";
            franzl.IntroduceMyself();

            Console.ReadKey();
        }
    }
}
