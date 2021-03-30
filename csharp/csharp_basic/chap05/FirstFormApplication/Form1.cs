using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FirstFormApplication {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();

            int width = 135;
            int height = 53;
            int margin = 25;
            myButton.Text = "코드에서 변경!";
            myButton.Width = 135;

            for (int i = 1; i < 5; i++) {
                Button button = new Button();
                Controls.Add(button);
                button.Location = new Point(margin, (height + margin) * i + margin);
                button.Text = "동적 생성 " + i + "번째";
                button.Width = width;
                button.Height = height;
            }
        }
    }
}
