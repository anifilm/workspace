package spring.di;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import spring.di.ui.ExamConsole;

public class Program {
    public static void main(String[] args) {
        // 스프링에게 지시하는 방법으로 변경
        //Exam exam = new NewlecExam();
        //ExamConsole console = new InlineExamConsole(exam);
        //ExamConsole console = new GridExamConsole(exam);
        //console.setExam(exam);

        ApplicationContext context = new
                ClassPathXmlApplicationContext("setting.xml");

        ExamConsole console = (ExamConsole) context.getBean("console");
        //ExamConsole console = context.getBean(ExamConsole.class);

        console.print();
    }
}
