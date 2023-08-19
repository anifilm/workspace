using System;

namespace Challenge
{
    class Program
    {
        static void Main(string[] args)
        {
            byte myByte = 25;               // unsigned integer
            Console.WriteLine(myByte);

            sbyte mySbyte = -15;            // signed integer
            Console.WriteLine(mySbyte);

            int myInt = -12318925;          // signed integer
            Console.WriteLine(myInt);

            uint myUint = 123091;           // unsigned integer
            Console.WriteLine(myUint);

            short myShort = -32768;         // signed integer
            Console.WriteLine(myShort);

            ushort myUShort = 65535;        // unsigned integer
            Console.WriteLine(myUShort);

            float myFloat = -31.1289f;      // single-precision floating point
            Console.WriteLine(myFloat);

            double myDouble = -12.1231250;  // double-precision floating point
            Console.WriteLine(myDouble);

            char myCharacter = 'A';         // single unicode character
            Console.WriteLine(myCharacter);

            bool myBool = true;             // logical boolean type
            Console.WriteLine(myBool);

            string myText = "I control text";   // sequence of characters
            Console.WriteLine(myText);

            string numText = "15";
            int myNumFromText = int.Parse(numText);
            Console.WriteLine(myNumFromText);
        }
    }
}
