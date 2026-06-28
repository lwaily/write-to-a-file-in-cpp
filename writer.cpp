#include <stdio.h>
#include <iostream>
#include <ostream>

int main(int argc, char* argv[]){
	if(argc != 3){
		std::cerr << "ERROR: Incorrect parameters" << std::endl;
        std::cerr << "USAGE: ./writer <file> <number_of_bytes>" << std::endl;
		return 1;
	}
	FILE *fp = fopen(argv[1], "w");
	unsigned int number_of_bytes = std::stoi(argv[2]);

	for(unsigned int i = 0; i < number_of_bytes; ++i){
		fputs("a", fp);
	}
	fclose(fp);
	return 0;
}
