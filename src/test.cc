#include<iostream>
#include<foo.h>

int main(int argc, char* argv[])
{
	if(argc <= 1){
		print_log("params lost!"); 
		return -1;
	}
	
	print_log("param is:");
	print_log(argv[1]);

	return 0;
}








