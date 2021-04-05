using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace NewForm {
    public partial class Form1 : Form {
        class CustomForm : Form {  // Form 클래스를 상속 받습니다.
            public CustomForm() {
                this.Size = new Size(400, 300);
                this.Text = "제목 글자";
            }
        }
        public Form1() {
            InitializeComponent();
            IsMdiContainer = true;
        }

        private void button1_Click(object sender, EventArgs e) {
            //MessageBox.Show("내용");
            //MessageBox.Show("내용", "제목");

            //DialogResult result;
            //do {
            //    result = MessageBox.Show("내용", "제목", MessageBoxButtons.RetryCancel);
            //} while (result == DialogResult.Retry);
            CustomForm form = new CustomForm();
            //form.MdiParent = this;
            //form.Show();
            form.ShowDialog();
        }
    }
}
