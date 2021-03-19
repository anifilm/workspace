using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    class Program
    {
        static void Main(string[] args)
        {
            Post post1 = new Post("Thanks for the birthday wishes", "Denis Panjuta", true);
            Console.WriteLine(post1.ToString());

            ImagePost imagePost1 = new ImagePost("Check out my new shoes", "Denis Panjuta",
                "https://image.com/shoes", true);
            Console.WriteLine(imagePost1.ToString());

            VideoPost videoPost1 = new VideoPost("FailVideo", "Denis Panjuta",
                "https://video.com/failvideo", 10, true);
            Console.WriteLine(videoPost1.ToString());

            videoPost1.Play();
            Console.WriteLine("Press any key to stop the video!");
            Console.ReadKey();
            videoPost1.Stop();

            Console.ReadLine();
        }
    }
}
