using System;
using System.Linq;
using System.Threading.Tasks;

namespace _1_3_for_foreach
{
    class Program
    {
        static void Main(string[] args)
        {
            var heavyQuary = Enumerable.Range(0, 10).Where(c => {

                Task.Delay(1000).Wait();        // 실제 업무에선 무거운 처리를 하고 있음
                return true;
            });

            var start = DateTime.Now;

            // 첫번째 예제
            // for (int i = 0; i < heavyQuary.Count(); i++) {
            //     Console.WriteLine(heavyQuary.ElementAt(i));
            // }

            // 두번째 예제
            // var enumerator = heavyQuary.GetEnumerator();

            // for ( ; enumerator.MoveNext(); ) {
            //     System.Console.WriteLine(enumerator.Current);
            // }

            // 세번째 예제
            foreach (var item in heavyQuary) {
                System.Console.WriteLine(item);
            }

            System.Console.WriteLine("소요시간:{0}", DateTime.Now-start);
        }
    }
}
