import { Component } from '@angular/core';
import { Item } from './item.model';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css'],
})
export class AppComponent {
  // 데이터 정의
  items: Item[] = [
    {
      name: 'CPU',
      price: 462984,
      quantity: 1,
    },
    {
      name: '메인보드',
      price: 112053,
      quantity: 1,
    },
    {
      name: '메모리',
      price: 112053,
      quantity: 2,
    },
  ];
}
