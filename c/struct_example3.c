#include <stdio.h>

char copy_str(char *dest, char *src);

struct obj {
	char name[20];
	int px, py;
} Ball;

int Print_Obj_Status(struct obj OBJ);

int main() {

	Ball.px = 3;
	Ball.py = 4;

	copy_str(Ball.name, "RED Ball");

	Print_Obj_Status(Ball);

	return 0;
}

int Print_Obj_Status(struct obj OBJ) {

	printf("Location of %s\n", OBJ.name);
	printf("(%d, %d)\n", OBJ.px, OBJ.py);

	return 0;
}

char copy_str(char *dest, char *src) {

	while (*src) {

		*dest = *src;

		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}
