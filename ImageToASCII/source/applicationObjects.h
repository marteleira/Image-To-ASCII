#pragma once
#include "pch.h"

class applicationObjects
{
public:
	applicationObjects(const char*);
	virtual ~applicationObjects();
	void drawAscii();
	sf::Image* _rawimg;
private:
	sf::Vector2u* _imgsize;
	sf::Color* _currcolor;
	int grayscalepx, input;
};

