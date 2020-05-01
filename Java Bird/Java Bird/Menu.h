#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
class Menu
{
public:
	Menu(float width,float height);
	~Menu();

	void draw(sf::RenderWindow &window);
	void Moveup();
	void MoveDown();
	int GetPressedItem() {
		return selectedItemIndex;
	}
	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[2];

};

