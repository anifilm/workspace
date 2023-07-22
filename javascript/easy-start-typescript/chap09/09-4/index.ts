class Chatgpt {
  name: string;

  constructor(name: string) {
    this.name = name;
  }

  sum(a: number, b: number): number {
    return a + b;
  }
}

const gpt = new Chatgpt('대화형 AI');
gpt.sum(10, 20);
