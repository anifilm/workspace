using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphism
{
    class Audi: Car
    {
        private string brand = "Audi";

        public string Model { get; set; }

        public Audi(int hp, string color, string model):base(hp, color)
        {
            this.Model = model;
        }

        public new void ShowDetails()
        {
            Console.WriteLine("Brand: {0}, HP: {1}, color: {2}", brand, HP, Color);
        }

        public override void Repair()
        {
            Console.WriteLine("The Audi {0} was repaired", Model);
        }
    }
}
