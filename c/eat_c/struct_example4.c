#include <stdio.h>

struct HUMAN {
	int age;
	int height;
	int weight;
	int gender;
};

int Print_Status(struct HUMAN human);

int main() {

	struct HUMAN Adam = {42, 170, 74, 0};
	struct HUMAN Eve = {27, 166, 48, 1};

	Print_Status(Adam);
	Print_Status(Eve);

	return 0;
}

int Print_Status(struct HUMAN human) {

	if (human.gender == 0) {

		printf("\nMale\n");
	} else {

		printf("\nFemale\n");
	}

	printf("Age: %d / Height: %d / Weight: %d\n", human.age, human.height, human.weight);

	if (human.gender == 0 && human.height >= 180) {

		printf("He is a Winner!!!\n");
	} else if (human.gender == 0 && human.height < 180) {

		printf("He is a Loser.\n");
	}

	printf("------------------------------------------\n");

	return 0;
}

