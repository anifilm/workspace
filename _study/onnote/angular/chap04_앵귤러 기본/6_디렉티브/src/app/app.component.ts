import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css'],
})
export class AppComponent {
  // 데이터 정의
  userId = 'alex';
  userPw = '1234';
  introduction = 'hello';
  developer = true;
  foreigner = 'yes';
  hobbyList = ['Sports', 'Music', 'Movie'];
  gender = 'male';
  nationality = '01';
  cars = ['Volvo', 'Saab', 'Opel'];
  selectedCars = ['Volvo', 'Saab'];

  getNationality() {
    if (this.nationality === '01') {
      return 'Korea';
    } else if (this.nationality === '02') {
      return 'Germany';
    } else if (this.nationality === '03') {
      return 'Australia';
    } else {
      return 'None';
    }
  }
}
