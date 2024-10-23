#include<stdio.h>
#include<string.h>

void Xoa_space(char s[])
{
	int len = strlen(s);
	int i = 0;
	while(s[0] == ' ')  //              " "" "abc" " "\0=> " "abc" " " => abc\0
	{
		for(i = 0; i < len; i++)
		{
			s[i] = s[i+1];
		}
	} 
	len = strlen(s); // 5
	for(i = len-1; i >= 0 && s[i] == ' ';i--); //i = 4, i >= 0 && s[i] = " ", i-- stop: i = 2 s[i+1 = 3] = \0
	s[i+1] = '\0';
	len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		while(s[i] == ' ' && s[i+1] == ' ')
		{
			for(int j = i; j < len; j++)
			{
				s[j] = s[j+1];
			}
		}
	}
}

void Fix(char s[])
{
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
}

void Fix2(char s[])
{
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
}

int main()
{
	int n;
	scanf("%d\n",&n);
	while(n--)
	{
		char s[100];
		fgets(s,100,stdin);
		Xoa_space(s);
		Fix(s);
	//	printf("%s\n",s);
		char s1[100];
		char s2[100];
		int begin1 = 0;
		int begin2 = 0;
		int mem = 0;
		for(int i = 0; i < strlen(s); i++)  // s = vu nguyen cuong =>  s[2] = ' ' , mem = 2, s1[2] = ' ' , begin1 = 2
		{
			mem = i;
			if(s[i] == ' ') break; // => s1=[v,u], mem = 2 => stop
			s1[begin1++] = s[i];
		}
		Fix2(s1); // s1 = VU
		for(int i = mem + 1; i < strlen(s)-1; i++)
		{
			s2[begin2++] = s[i];  // s2= nguyen cuong
		}
		s2[0] -= 32; // s2 = Nguyen cuong
		for(int i = 0; i < begin2; i++)
		{
			if(s2[i] == ' ')
			{
				s2[i+1] -= 32;  // s2 = Nguyen Cuong
			}
		}
		for(int i = 0; i < begin2; i++)
		{
			printf("%c",s2[i]);   // Nguyen Cuong, VU
		}
		printf(", ");
		for(int i = 0; i < begin1; i++)
		{
			printf("%c",s1[i]);
		}
		printf("\n");
	}
}