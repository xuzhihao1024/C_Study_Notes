#include<stdio.h>

int main (){
	
	char *c = "hello world!";
	char string[8];
	scanf("%7s",string);
	
	/*
		在%和s之间的数字表示最多允许读入的字符的数量，
		这个数字应该比数组的大小小一
	*/
		
	printf("%s \n",string);
	printf("%s\n",c);
	
	return 0 ;
} 
