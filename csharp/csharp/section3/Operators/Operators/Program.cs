using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Operators
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1 = 5;
            int num2 = 3;
            int num3;

            // unary operator
            num3 = -num1;
            Console.WriteLine("num3 is {0}", num3);

            bool isSunny = true;
            Console.WriteLine("is is sunny? {0}", !isSunny);

            // increment operator
            int num = 0;
            num++;
            Console.WriteLine("num is {0}", num);       // 1
            Console.WriteLine("num is {0}", num++);     // 1
            // pre increment
            Console.WriteLine("num is {0}", ++num);     // 3

            // decrement operator
            num--;
            Console.WriteLine("num is {0}", num);       // 2
            Console.WriteLine("num is {0}", num--);     // 2
            // pre decrement
            Console.WriteLine("num is {0}", --num);     // 0

            int result;

            result = num1 + num2;
            Console.WriteLine("result of {0} + {1} is {2}", num1, num2, result);
            result = num1 - num2;
            Console.WriteLine("result of {0} - {1} is {2}", num1, num2, result);
            result = num1 * num2;
            Console.WriteLine("result of {0} * {1} is {2}", num1, num2, result);
            result = num1 / num2;
            Console.WriteLine("result of {0} / {1} is {2}", num1, num2, result);
            result = num1 % num2;
            Console.WriteLine("result of {0} % {1} is {2}", num1, num2, result);

            // relational and type operator
            bool isLower;
            isLower = num1 < num2;
            Console.WriteLine("result of {0} < {1} is {2}", num1, num2, isLower);

            // equality operator
            bool isEqual;
            isEqual = num1 == num2;
            Console.WriteLine("result of {0} == {1} is {2}", num1, num2, isEqual);
            isEqual = num1 != num2;
            Console.WriteLine("result of {0} != {1} is {2}", num1, num2, isEqual);

            // conditional operator
            bool isLowerAndSunny;
            // condition1 AND condition2
            isLowerAndSunny = isLower && isSunny;
            Console.WriteLine("result of {0} && {1} is {2}", isLower, isSunny, isLowerAndSunny);

            // condition1 OR condition2
            isLowerAndSunny = isLower || isSunny;
            Console.WriteLine("result of {0} || {1} is {2}", isLower, isSunny, isLowerAndSunny);
            Console.ReadKey();

            Console.ReadKey();
        }
    }
}
