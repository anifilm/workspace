#include <stdio.h>

struct employee {
	int age;
	int salary;
};

struct company {
	struct employee data;
	char name[10];
};

int main() {
	
	struct company Lim;

	Lim.data.age = 42;
	Lim.data.salary = 5700000;

	printf("Lim's age: %d\n", Lim.data.age); 
	printf("Lim's salary: %d $/year\n", Lim.data.salary);

	return 0;
}
