#include "SFML/Graphics.hpp"
#include <iostream>
#include <conio.h>
#include <windows.h>


using namespace std;

int main()
{


    POINT xypos;

	sf::RenderWindow window( sf::VideoMode(0, 0 ), "" ,sf::Style::None);



	if (sf::Joystick::isConnected(0))
		{
			std::cout << "Joystick is connected!!! " << std::endl;
		}
    else
        {
            std::cout << "Joystick is not connected " << std::endl;
        }

        std::cout <<"number of buttons is ";

		std::cout << sf::Joystick::ButtonCount;

		std::cout << "." << std::endl;

		std::cout << "press any button" << std::endl;


	while (true)
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}





        GetCursorPos(&xypos);
        SetCursorPos(xypos.x + sf::Joystick::getAxisPosition(0, sf::Joystick::Axis::X)/100, xypos.y + sf::Joystick::getAxisPosition(0, sf::Joystick::Axis::Y)/100);



		if (sf::Joystick::isButtonPressed(0, 0))
		{
			std::cout << "Button a is being pressed" << std::endl;
		}

		if (sf::Joystick::isButtonPressed(0, 1))
		{
			std::cout << "Button b is being pressed" << std::endl;
		}

		if (sf::Joystick::isButtonPressed(0, 2))
		{
			std::cout << "Button x is being pressed" << std::endl;
		}

        if (sf::Joystick::isButtonPressed(0, 3))
		{
			std::cout << "Button y is being pressed" << std::endl;
		}

        if (sf::Joystick::isButtonPressed(0, 4))
		{
			std::cout << "Button lb is being pressed" << std::endl;
		}

        if (sf::Joystick::isButtonPressed(0, 5))
		{
			std::cout << "Button rb is being pressed" << std::endl;
		}

        if (sf::Joystick::isButtonPressed(0, 6))
		{
			std::cout << "Button two blocks is being pressed" << std::endl;
		}

        if (sf::Joystick::isButtonPressed(0, 7))
		{
			std::cout << "Button menu is being pressed" << std::endl;
		}

        if (sf::Joystick::isButtonPressed(0, 8))
		{
			std::cout << "Button left stick is being pressed" << std::endl;
		}

        if (sf::Joystick::isButtonPressed(0, 9))
		{
			std::cout << "Button right stick is being pressed" << std::endl;
		}


















		window.clear( );


	}
}
