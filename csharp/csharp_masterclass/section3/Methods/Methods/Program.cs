﻿using System;

namespace Methods
{
    class Program
    {
        static void Main(string[] args)
        {
            WriteSomething();
            WriteSomthingSpecific("I am an argument and am called from a method");
            Console.Read();
        }
        // access modifier (static) return type method name (parameter1, parameter2)
        public static void WriteSomething()
        {
            Console.WriteLine("I am called from a method");
        }

        public static void WriteSomthingSpecific(string myText)
        {
            Console.WriteLine(myText);
        }
    }
}