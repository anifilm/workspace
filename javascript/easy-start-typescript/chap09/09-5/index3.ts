class WaterPurifier {
  public waterAmount: number;

  constructor(waterAmount: number) {
    this.waterAmount = waterAmount;
  }

  public wash() {
    if (this.waterAmount > 0) {
      console.log('정수기 동작 성공');
    }
  }
}

const purifier = new WaterPurifier(30);
purifier.wash(); // 정수기 동작 성공