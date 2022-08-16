using System.Linq;

class LinqAverage {
    static void Main() {
        int[] numbers = { 1, 3, 4 };

        double average = numbers.Average();

        Console.WriteLine($"{nameof(numbers)} 배열 요소의 평균: {average:#,###.##}");
    }
}
