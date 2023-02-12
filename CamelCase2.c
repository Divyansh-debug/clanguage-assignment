#include<stdio.h>
void main (){
	int i;
	char str[100];
	gets(str);
	if(str[0]>='a' && str[0]<='z'){
	   str[0]=str[0]-32;
	}
	
	for(i=1;str[i]!='\0';i++){
		if(str[i]==' ' && str[i+1]>='a' && str[i]<='z'){
			str[i+1]=str[i+1]-32;
		}
	}
	
	for(i=1;str[i]!='\0';i++){
		if(str[i]>='A' && str[i]<='Z' && str[i-1]!=' '){
			str[i]=str[i]+32;
		}
	}
	puts(str);
}
