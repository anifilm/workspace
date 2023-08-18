using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance2
{
    class Trainee: Employee
    {
        public int WorkingHours { get; set; }
        public int SchoolHours { get; set; }

        public Trainee(string name, string firstName, int salary, int workingHours, int schoolHours) : base(name, firstName, salary)
        {
            this.WorkingHours = workingHours;
            this.SchoolHours = schoolHours;
        }

        public void Learn()
        {
            Console.WriteLine("I'm learning for {0} hours a week", SchoolHours);
        }

        public new void Work()
        {
            Console.WriteLine("I work for {0} hours a week", WorkingHours);
        }
    }
}
