#define MAX 10

struct stack {
    int top;
    int data[MAX];
};
typedef struct stack stackType;

// sp가 가리키는 스택을 새로 만들고 초기화
void init(stackType* sp);

// sp가 가리키는 스택이 빈 스택이면 1(참)을 리턴
int is_empty(stackType* sp);

// sp가 가리키는 스택이 꽉 찼으면 1(참)을 리턴
int is_full(stackType* sp);

// sp가 가리키는 스택에 item을 삽입
void push(stackType* sp, const int item);

// sp가 가리키는 스택에서 item을 리턴하고 제거
int pop(stackType* sp);
