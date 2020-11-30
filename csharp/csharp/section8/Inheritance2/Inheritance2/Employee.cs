using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance2
{
    class Employee
    {
        public string Name { get; set; }
        public string FirstName { get; set; }
        public int Salary { get; set; }

        public Employee(string name, string firstName, int salary)
        {
            this.Name = name;
            this.FirstName = firstName;
            this.Salary = salary;
        }

        public Employee()
        {
            Name = "Panjuta";
            FirstName = "Denis";
            Salary = 50000;
        }

        public void Work()
        {
            Console.WriteLine("My name is {0}. I'm working", Name);
        }

        public void Pause()
        {
            Console.WriteLine("My name is {0}. I'm having a break", Name);
        }
    }
}
