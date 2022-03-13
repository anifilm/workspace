import { Component, OnInit, OnDestroy, AfterViewInit, AfterViewChecked, AfterContentInit, AfterContentChecked } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css'],
})
export class AppComponent implements OnInit, OnDestroy, AfterViewInit, AfterViewChecked, AfterContentInit, AfterContentChecked {
  // 데이터 정의
  message = 'Hello Angular!';

  ngOnInit() {
    console.log('[ngOnInit]');
  }

  ngOnDestroy(): void {
    console.log('ngOnDestroy');
  }

  ngAfterViewInit(): void {
    console.log('ngAfterViewInit');
  }

  ngAfterViewChecked(): void {
    console.log('ngAfterViewChecked');
  }

  ngAfterContentInit(): void {
    console.log('ngAfterContentChecked');
  }

  ngAfterContentChecked(): void {
    console.log('ngAfterContentChecked');
  }
}
