

#include<stdio.h>  // Header file//
int main(){
	printf("Size of int: %zu bytes\n",sizeof(int));
	printf("Size of short int: %zu bytes\n",sizeof(short int));
	printf("Size of long: %zu bytes\n",sizeof(long));
	printf("Size of long int: %zu bytes\n",sizeof(long int));
	printf("Size of unsigned int: %zu bytes\n",sizeof(unsigned int));
	printf("Size of signed int: %zu bytes\n",sizeof(signed int));
	printf("Size of float: %zu bytes\n",sizeof(float));
	printf("Size of double: %zu bytes\n",sizeof(double));
	printf("Size of long double: %zu bytes\n",sizeof(long double));
	printf("Size of character: %zu bytes\n",sizeof(char));
	return 0;
}

-------Output of the Program------------
Size of int: 4 bytes
Size of short int: 2 bytes
Size of long: 4 bytes
Size of long int: 4 bytes
Size of unsigned int: 4 bytes
Size of signed int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long double: 12 bytes
Size of character: 1 bytes

//size of int, long, long int, unsigned int, signed int, float = 4 bytes, i.e., same 

