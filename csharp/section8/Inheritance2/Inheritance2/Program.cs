using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance2
{
    class Program
    {
        // Create a main class with the Main method, then a base class employee with the properties Name, 
        // FirstName, Salary and the methods Work() and Pause().
        // Create a deriving class boss with the property CompanyCar and the method Lead().
        // Create another deriving class of employees = trainnees with the properties WorkingHours
        // and SchoolHours and a method Learn();
        // Override the methods Work() of the trainee class so that it indicateds
        // the working hours of the trainee.
        // Don't forget to create the constructors.
        // Create an object of each of the three classes (with arbitrary values)
        // and call the methods, Lead() of Boss and Work() of Trainee.
        // Just print out the the respective text, what the respective employees do.

        static void Main(string[] args)
        {
            Employee michael = new Employee("Michael", "Miller", 40000);

            michael.Work();
            michael.Pause();

            Boss chuckNorris = new Boss("Norris", "Chuck", 180000, "Ferrari");

            chuckNorris.Lead();

            Trainee michelle = new Trainee("Garther", "Michelle", 10000, 32, 8);

            michelle.Work();
            michelle.Learn();

            Console.ReadKey();
        }
    }
}
