#include "pch.h"
#include "Menu.h"


Menu::Menu(float width, float hight)
{
	if (!font.loadFromFile("arial.ttf"))

	{
		std::cout << "Nie za³adowano trzcionki ! \n";

	}

	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Red);
	menu[0].setString("Play");
	menu[0].setPosition(sf::Vector2f(width / 2.25, hight / 3 ));

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("Exit");
	menu[1].setPosition(sf::Vector2f(width / 2.25, hight / 2));

	
	
	selectedItemIndex = 0;


}
void Menu::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < 2; i++)
	{
		window.draw(menu[i]);
	}
}
void Menu::Moveup()
{
	if (selectedItemIndex - 1 >= 0)
	{
		
		selectedItemIndex--;
			
	}
}
void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < 2)
	{
		
		selectedItemIndex++;
		
	}
}
Menu::~Menu()
{
}
