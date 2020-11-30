using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphism
{
    class BMW: Car
    {
        private string brand = "BMW";

        public string Model { get; set; }

        public BMW(int hp, string color, string model) : base(hp, color)
        {
            this.Model = model;
        }

        public new void ShowDetails()
        {
            Console.WriteLine("Brand: {0}, HP: {1}, color: {2}", brand, HP, Color);
        }

        public sealed override void Repair()
        {
            Console.WriteLine("The BMW {0} was repaired", Model);
        }
    }
}
