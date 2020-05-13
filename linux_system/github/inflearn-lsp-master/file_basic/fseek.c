#include <stdio.h>
#include <string.h>

static int create_file(void)
{
	FILE *fp;

	if (!(fp = fopen("datafile", "w"))) {
		printf("fopen() fail\n");
		return -1;
	}

	printf("after fopen(). offset=%ld\n", ftell(fp));
	fputs("hello world\n", fp);
	fputs("hello world!\n", fp);
	fputs("hello world!!\n", fp);
	fputs("hello world!!!\n", fp);
	printf("before fclose(). offset=%ld\n", ftell(fp));
	printf("---------------------------------\n");

	fclose(fp);

	return 0;
}

static int read_file(void)
{
	FILE *fp;
	char buf[1024];

	if (!(fp = fopen("datafile", "r+"))) {
		printf("fopen() fail\n");
		return -1;
	}

	printf("after fopen(). offset=%ld\n", ftell(fp));
	memset(buf, 0, sizeof(buf));
	fgets(buf, sizeof(buf), fp);
	printf("after fgets(). offset=%ld\n", ftell(fp));

	fseek(fp, 0, SEEK_END);
	printf("after fseek(). offset=%ld\n", ftell(fp));
	fputs("final\n", fp);
	printf("before fclose(). offset=%ld\n", ftell(fp));
	printf("---------------------------------\n");

	fclose(fp);

	return 0;
}

int main(int argc, char **argv)
{
	create_file();

	read_file();

	return 0;
}
