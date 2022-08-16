using System;
using System.Linq;

public static class Extensions {
    public static bool find<T>(this T[] array, T target) {
        return array.Contains(target);
    }
}

class RandomSampleLotto {
    static void MakeLottoNumber() {
        // Random 클래스의 인스턴스 생성
        Random random = new Random();

        int[] lottoNumber = new int[6];

        int i = 0;
        while (i < 6) {
            int rNumber = random.Next(1, 46);
            if (!lottoNumber.find(rNumber)) {
                lottoNumber[i] = rNumber;
                i++;
            }
        }

        for (int j = 0; j < 6; j++) {
            string pNumber = "";
            if (j < 5) {
                pNumber = lottoNumber[j] + ", ";
            }
            else {
                pNumber = lottoNumber[j] + "\n";
            }
            Console.Write(pNumber);
        }
    }

    static void Main() {
        MakeLottoNumber();
    }
}
