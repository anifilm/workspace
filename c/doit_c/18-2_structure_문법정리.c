// 18-2 구조체 (structure)

// 사람 5명의 나이, 키, 몸무게를 관리 한다면
char name1[12], name2[12], name3[12], name4[12], name5[12]
int age1, age2, age3, age4, age5;
float height1, height2, height3, height4, height5;
float weight1, weight2, weight2, weight4, weight5;

// 데이터의 그룹화 1 (배열 사용)
char name[5][12];
int age[5];
float height[5];
float weight[5];

// 데이터 그룹화 2 (구조체 사용)
struct People {
    char name[12];
    unsigned short int age;
    float height;
    float weight;
};

struct People data1;    // 구조체 자료형 변수 선언 1
data1.name = "이름1";
data1.age = 43;
data1.height = 169.8;
date1.weight = 68.2;

// typedef를 사용해 Person 이라는 새로운 자료형을 정의하여 사용 가능
typedef struct People Person;

Person data1;           // 구조체 자료형 변수 선언 2
data1.name = "이름1";
data1.age = 43;
data1.height = 169.8;
date1.weight = 68.2;

// struct와 typedef를 조합하여 사용 가능 1
typedef struct People {
    char name[12];
    unsigned short int age;
    float height;
    float weight;
} Person;

// struct와 typedef를 조합하여 사용 가능 2 (구조체 이름 생략)
typedef struct {
    char name[12];
    unsigned short int age;
    float height;
    float weight;
} Person;

                                data 22 바이트
    ┌──────────────────────────────────────────────────────────────────┐
...| 0| 1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|16|17|18|19|20|21|22|...
    └────────────────────────────────────┘ └───┘ └─────────┘ └─────────┘
                  data.name              data.age data.height data.weight
.                 12 바이트              2 바이트  4 바이트    4 바이트


// Person 데이터 3개를 저장할 수 있는 메모리를 할당
Person friends[3];

                friends 66 바이트
     ┌──────────────────────────────────────┐
... [ friends[0] ][ friends[1] ][ friends[2] ]...

friends[0].name = "이름1";
friends[0].age = 43;
friends[0].height = 169.8;
friends[0].weight = 68.2;

friends[1].name;
friends[1].age;
friends[1].height;
friends[1].weight;

friends[2].name;
friends[2].age;
friends[2].height;
friends[2].weight;

// 구조체로 선언한 변수를 포인터로 사용
Person data1;
Person *p1;
p1 = &data1;

// 연산자 우선순위로 인해 (*p1) 과 같이 괄호를 사용해야 한다.
(*p1).name = "이름1";
(*p1).age = 43;
(*p1).height = 169.8;
(*p1).weight = 68.2;

// 연산자 우선순위에 대한 대안으로 -> (arrow pointer) 를 사용
p1->name = "이름1";   // (*p1).name = "이름1"; 과 같다.
p1->age = 43;
p1->height = 169.8;
p1->weight = 68.2;

// 구조체로 선언한 변수를 초기화
struct People data1 = {"이름1", 43, 169.8, 68.2};
(또는) People data1 = {"이름1", 43, 169.8, 68.2};
