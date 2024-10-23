#include<stdio.h>
#include<string.h>

void xoa(char s1[] , char s2[] )
{
	char delim[2] = " "; // dấu hiệu cắt là khoảng trắng " "
	char *token; // biến để lấy giá trị trả về của hàm cắt
	token = strtok(s1,delim); // strtok(s1,delim)
	while(token != NULL)
	{
		if(strcmp(token,s2) != 0)
		{
			printf("%s ",token);
		}
		token = strtok(NULL,delim);
	}
}


int main()
{
	char s1[100];
	gets(s1);
	char s2[10];
	gets(s2);
	xoa(s1,s2);
	return 0;
}
