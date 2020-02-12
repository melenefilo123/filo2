#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void get_name(char *prompt, char *greeting){
	printf(prompt);
	int fd =0;
	char *buf =greeting + strlen(greeting);
	size_t count =sizeof (greeting) - strlen (greeting);
	read (fd, buf, count);
}

int main(){
	char prompt[] = "please enter your name: \n";
	char greeting[64]= "welcome back, ";
	get_name(prompt,greeting);
	printf(greeting);
}
