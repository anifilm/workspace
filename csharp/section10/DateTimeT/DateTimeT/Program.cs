using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DateTimeT
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime dateTime = new DateTime(1978, 9, 18);
            
            Console.WriteLine("My birthday is {0}", dateTime);

            // Write today on screen
            Console.WriteLine("\nToday is {0}", DateTime.Today);
            Console.WriteLine("Today is {0}", DateTime.Today.DayOfWeek);

            // Write current time on screen
            Console.WriteLine("\nNow is {0}", DateTime.Now);

            DateTime tomorrow = GetTomorrow();
            Console.WriteLine("\nTomorrow will be the {0}", tomorrow);
            Console.WriteLine(GetFirstDayOfYear(2020));

            int days = DateTime.DaysInMonth(2000, 2);
            Console.WriteLine("\nDays in Feb 2000: {0}", days);
            days = DateTime.DaysInMonth(2002, 2);
            Console.WriteLine("Days in Feb 2002: {0}", days);
            days = DateTime.DaysInMonth(2004, 2);
            Console.WriteLine("Days in Feb 2004: {0}", days);

            DateTime now = DateTime.Now;
            Console.WriteLine("\nMinute: {0}", now.Minute);

            // display the time in this structure x o'clock y minutes and z seconds
            Console.WriteLine("{0} o'clock {1} minutes and {2} secounds", now.Hour, now.Minute, now.Second);

            Console.WriteLine("\nWrite a date in this format: yyyy-mm-dd");
            string input = Console.ReadLine();

            if (DateTime.TryParse(input, out dateTime))
            {
                Console.WriteLine(dateTime);
                TimeSpan daysPassed = now.Subtract(dateTime);
                Console.WriteLine("\nDays passed since: {0}", daysPassed.Days);
            }
            else
            {
                Console.WriteLine("Wrong input!");
            }

            Console.ReadKey();
        }

        static DateTime GetTomorrow()
        {
            return DateTime.Today.AddDays(1);
        }

        static DateTime GetFirstDayOfYear(int year)
        {
            return new DateTime(year, 1, 1);
        }
    }
}
