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
using System.Configuration;

namespace LinqToSQL
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        LinqToSqlDataClassesDataContext dataContext;

        public MainWindow()
        {
            InitializeComponent();

            String connectionString = ConfigurationManager.ConnectionStrings["LinqToSQL.Properties.Settings.anifilmDBConnectionString"].ConnectionString;
            dataContext = new LinqToSqlDataClassesDataContext(connectionString);

            //InsertUniversities();
            //InserStudent();
            //InsertLectures();
            //InsertStudentLectureAssociations();
            //GetUniversityOfToni();
            //GetLecturesFromToni();
            //GetAllStudentsFromYale();
            //GetAllUniversitiesWithTransgenders();
            //GetAllLecturesFromBeijingTech();
            //UpdateToni();
            //DeleteJame();
        }

        public void InsertUniversities()
        {
            dataContext.ExecuteCommand("delete from University");

            University yale = new University();
            yale.Name = "Yale";
            dataContext.Universities.InsertOnSubmit(yale);

            University beijingTech = new University();
            beijingTech.Name = "Beijing Tech";
            dataContext.Universities.InsertOnSubmit(beijingTech);

            dataContext.SubmitChanges();

            MainDataGrid.ItemsSource = dataContext.Universities;
        }

        public void InserStudent()
        {
            University yale = dataContext.Universities.First(un => un.Name.Equals("Yale"));
            University beijingTech = dataContext.Universities.First(un => un.Name.Equals("Beijing Tech"));

            List<Student> students = new List<Student>();

            students.Add(new Student { Name = "Carla", Gender = "female", UniversityId = yale.Id });
            students.Add(new Student { Name = "Toni", Gender = "male", University = yale });
            students.Add(new Student { Name = "Leyle", Gender = "female", University = beijingTech });
            students.Add(new Student { Name = "Jame", Gender = "trans-gender", University = beijingTech });

            dataContext.Students.InsertAllOnSubmit(students);
            dataContext.SubmitChanges();

            MainDataGrid.ItemsSource = dataContext.Students;
        }

        public void InsertLectures()
        {
            dataContext.Lectures.InsertOnSubmit(new Lecture { Name = "Math" });
            dataContext.Lectures.InsertOnSubmit(new Lecture { Name = "History" });
            dataContext.Lectures.InsertOnSubmit(new Lecture { Name = "English" });

            dataContext.SubmitChanges();

            MainDataGrid.ItemsSource = dataContext.Lectures;
        }

        public void InsertStudentLectureAssociations()
        {
            Student Carla = dataContext.Students.First(st => st.Name.Equals("Carla"));
            Student Toni = dataContext.Students.First(st => st.Name.Equals("Toni"));
            Student Leyle = dataContext.Students.First(st => st.Name.Equals("Leyle"));
            Student Jame = dataContext.Students.First(st => st.Name.Equals("Jame"));

            Lecture Math = dataContext.Lectures.First(lc => lc.Name.Equals("Math"));
            Lecture History = dataContext.Lectures.First(lc => lc.Name.Equals("History"));
            Lecture English = dataContext.Lectures.First(lc => lc.Name.Equals("English"));

            dataContext.StudentLectures.InsertOnSubmit(new StudentLecture { Student = Carla, Lecture = Math });
            dataContext.StudentLectures.InsertOnSubmit(new StudentLecture { Student = Toni, Lecture = History });
            dataContext.StudentLectures.InsertOnSubmit(new StudentLecture { Student = Leyle, Lecture = History });
            dataContext.StudentLectures.InsertOnSubmit(new StudentLecture { Student = Jame, Lecture = English });

            //StudentLecture slToni = new StudentLecture();
            //slToni.StudentId = Toni.Id;
            //slToni.LectureId = History.Id;
            //dataContext.StudentLectures.InsertOnSubmit(slToni);

            dataContext.SubmitChanges();

            MainDataGrid.ItemsSource = dataContext.StudentLectures;
        }

        public void GetUniversityOfToni()
        {
            Student Toni = dataContext.Students.First(st => st.Name.Equals("Toni"));

            University TonisUniversity = Toni.University;

            List<University> universities = new List<University>();
            universities.Add(TonisUniversity);

            MainDataGrid.ItemsSource = universities;
        }

        public void GetLecturesFromToni()
        {
            Student Toni = dataContext.Students.First(st => st.Name.Equals("Toni"));

            var tonisLectures = from sl in Toni.StudentLecture select sl.Lecture;

            MainDataGrid.ItemsSource = tonisLectures;
        }

        public void GetAllStudentsFromYale()
        {
            var studentsFromYale = from student in dataContext.Students
                                   where student.University.Name == "Yale"
                                   select student;

            MainDataGrid.ItemsSource = studentsFromYale;
        }

        public void GetAllUniversitiesWithTransgenders()
        {
            var transgenderUniversities = from student in dataContext.Students
                                          join university in dataContext.Universities
                                          on student.University equals university
                                          where student.Gender == "trans-gender"
                                          select university;

            MainDataGrid.ItemsSource = transgenderUniversities;
        }

        public void GetAllLecturesFromBeijingTech()
        {
            var lecturesFromBeijingTech = from sl in dataContext.StudentLectures
                                          join student in dataContext.Students on sl.StudentId equals student.Id
                                          where student.University.Name == "Beijing Tech"
                                          select sl.Lecture;

            MainDataGrid.ItemsSource = lecturesFromBeijingTech;
        }

        public void UpdateToni()
        {
            Student Toni = dataContext.Students.FirstOrDefault(st => st.Name == "Toni");

            Toni.Name = "Antonio";

            dataContext.SubmitChanges();

            MainDataGrid.ItemsSource = dataContext.Students;
        }

        public void DeleteJame()
        {
            Student Jame = dataContext.Students.FirstOrDefault(st => st.Name == "Jame");
            dataContext.Students.DeleteOnSubmit(Jame);
            dataContext.SubmitChanges();

            MainDataGrid.ItemsSource = dataContext.Students;
        }
    }
}
