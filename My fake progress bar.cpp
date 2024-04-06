//Fake Progress Bar
#include <iostream>
#include <chrono>
#include <thread>

int main (void){
	
	using namespace std::chrono; 
	
		std::cout << "[";
		
	for(int i = 0; i < 100; i++)
		{
			sleep_for(milliseconds(5));
			std::cout << "=";
		}
		
		std::cout << "] 100%";
}
