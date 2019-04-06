#include <stdio.h>

struct APPLE function(int value);

struct APPLE {
	int number;
};

int main() {
	
	struct APPLE result;

	result = function(10);

	printf("result.number: %d\n", result.number);

	return 0;
}

struct APPLE function(int value) {
	struct APPLE IOS;

	IOS.number = value + 10;

	return IOS;
}
