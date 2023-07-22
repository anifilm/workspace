class Chatgpt {
  constructor(name) {
    this.name = name;
  }

  sum(a, b) {
    return a + b;
  }
}

const gpt = new Chatgpt('대화형 AI');
gpt.sum(10, 20);
