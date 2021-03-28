using System;

class TypeCheck {
    static void Main(string[] args) {
        // GetType() 메서드 활용
        int    _int    = 273;
        long   _long   = 522731033265;
        float  _float  = 52.273F;
        double _double = 52.273;
        char   _char   = '글';
        string _string = "문자열";

        Console.WriteLine(_int.GetType());    // System.Int32
        Console.WriteLine(_long.GetType());   // System.Int64
        Console.WriteLine(_float.GetType());  // System.Single
        Console.WriteLine(_double.GetType()); // System.Double
        Console.WriteLine(_char.GetType());   // System.Char
        Console.WriteLine(_string.GetType()); // System.String
    }
}
