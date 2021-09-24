#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{


    if(sf::Joystick::isConnected(0))
        std::cout <<"Joystick 1 is Connected" ;
    else
        std::cout <<"Joystick 1 is not Connected" ;




    if(sf::Joystick::isButtonPressed(0, 1))
        std::cout <<"button" ;
    else if(sf::Joystick::isButtonPressed(0, 2))
        std::cout <<"button 2" ;

    return 0;
}

