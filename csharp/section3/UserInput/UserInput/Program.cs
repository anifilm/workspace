using System;

namespace UserInput
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Calulate());
            Console.Read();
        }

        public static int Calulate()
        {
            Console.Write("Please enter the first number: ");
            string numberInput1 = Console.ReadLine();
            Console.Write("Please enter the second number: ");
            string numberInput2 = Console.ReadLine();

            int num1 = int.Parse(numberInput1);
            int num2 = int.Parse(numberInput2);

            int result = num1 + num2;
            return result;
        }
    }
}
