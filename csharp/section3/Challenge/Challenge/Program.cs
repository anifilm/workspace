using System;

namespace Challenge
{
    class Program
    {
        static void Main(string[] args)
        {
            string friend1 = "Hung";
            string friend2 = "Gil";
            string friend3 = "Hun";

            GreetFriend(friend1);
            GreetFriend(friend2);
            GreetFriend(friend3);
            Console.Read();
        }

        public static void GreetFriend(string friendName)
        {
            Console.WriteLine("Hi {0}, my friend!", friendName);
        }
    }
}
