using System;

// 부호 없는 정수 데이터 형식 사용
byte iByte = 255;
ushort iUInt16 = 65535;
uint iUInt32 = 4294967295;
ulong iUInt64 = 18446744073709551615;

Console.WriteLine("8비트    byte: {0}", iByte);
Console.WriteLine("16비트 ushort: {0}", iUInt16);
Console.WriteLine("32비트   uint: {0}", iUInt32);
Console.WriteLine("64비트  ulong: {0}", iUInt64);

/* 부호 없는 정수 데이터 형식
byte      8비트     System.Byte
ushort   16비트     System.UInt16
uint     32비트     System.UInt32
ulong    64비트     System.UInt64
*/
