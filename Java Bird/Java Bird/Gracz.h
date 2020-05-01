#pragma once
#include <iostream>


class Gracz
{
public:
	Gracz() {};
	~Gracz()
	{};

	int x, y, kierunek;
	sf::Color color;
Gracz(sf::Color color)
	{
		x = (rand() % 860) + 200;
		y = (rand() % 400) + 200;
		this->color = color;
		kierunek = rand() % 4;
	}
	void poruszanie()
	{
		if (kierunek == 0)
			y = y + 1;
		if (kierunek == 1)
			x = x - 1;
		if (kierunek == 2)
			x = x + 1;
		if (kierunek == 3)
			y = y - 1;
	}
	void strza³ki(Gracz gracz1) {
		
		//Gracz pierwszy pouszanie
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			if (gracz1.kierunek != 0)
				gracz1.kierunek = 3;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			if (gracz1.kierunek != 3)
				gracz1.kierunek = 0;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			if (gracz1.kierunek != 2)
				gracz1.kierunek = 1;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			if (gracz1.kierunek != 1)
				gracz1.kierunek = 2;
	}
		void wasd(Gracz gracz2){
		//Gracz drugi poruszanie
			
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			if (gracz2.kierunek != 0)
				gracz2.kierunek = 3;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			if (gracz2.kierunek != 2)
				gracz2.kierunek = 1;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			if (gracz2.kierunek != 3)
				gracz2.kierunek = 0;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			if (gracz2.kierunek != 1)
				gracz2.kierunek = 2;
	}

};



