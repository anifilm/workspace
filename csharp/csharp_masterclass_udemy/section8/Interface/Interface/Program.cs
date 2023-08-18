using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Interface
{
    public interface INotifications
    {
        // Members
        void showNotification();
        string getDate();
    }

    public class Notification: INotifications
    {
        private string sender;
        private string message;
        private string date;

        // Default Constructor
        public Notification()
        {
            sender = "Admin";
            message = "Yo, what's up";
            date = " ";
        }

        public Notification(string mySender, string myMessage, string myDate)
        {
            this.sender = mySender;
            this.message = myMessage;
            this.date = myDate;
        }

        public void showNotification()
        {
            Console.WriteLine("Message: {0} - was sent by {1} - at {2}", message, sender, date);
        }

        public string getDate()
        {
            return date;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Notification n1 = new Notification("Denis", "Tsup bro?", "12.06.2018");
            Notification n2 = new Notification("Frank", "All good buddy", "12.06.2018");
            n1.showNotification();
            n2.showNotification();

            Console.ReadKey();
        }
    }
}
