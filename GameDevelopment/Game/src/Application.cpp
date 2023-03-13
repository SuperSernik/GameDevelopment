#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <iostream>


int main(){

	
	engine::PrintMessage();
	engine::PrintSecondMessage();

	engine::test();
	engine::Print("sdf");

	std::cin.get();
}