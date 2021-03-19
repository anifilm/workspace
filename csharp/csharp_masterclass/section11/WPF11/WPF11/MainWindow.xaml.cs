using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WPF11
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void cbAllCheckedChanged(object sender, RoutedEventArgs e)
        {
            bool newVal = (cbAllToping.IsChecked == true);
            cbSalami.IsChecked = newVal;
            cbMozzarella.IsChecked = newVal;
            cbMushrooms.IsChecked = newVal;
        }

        private void cbSingleCheckedChanged(object sender, RoutedEventArgs e)
        {
            cbAllToping.IsChecked = null;

            if ((cbSalami.IsChecked == true) && (cbMozzarella.IsChecked == true) && (cbMushrooms.IsChecked == true))
            {
                cbAllToping.IsChecked = true;
            }

            if ((cbSalami.IsChecked == false) && (cbMozzarella.IsChecked == false) && (cbMushrooms.IsChecked == false))
            {
                cbAllToping.IsChecked = false;
            }
        }
    }
}
