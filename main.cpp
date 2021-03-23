#include <iostream>
#include <stdlib.h>


using namespace std;

int main(int argc, char** argv) {
	
	int i = 0;

	char c1 = ' ';
	


	while(i<=256)
	{
		i++;
		c1 = char(i) ;
			
		std::cout<< c1 << " " << i << "\n";
	
	};

	


	
	return 0;
}
