#include "applicationObjects.h"

applicationObjects::applicationObjects(const char* path)
{
	this->_rawimg = new sf::Image();
	_rawimg->loadFromFile(path);
	this->_imgsize =new sf::Vector2u(_rawimg->getSize());
	this->_currcolor = new sf::Color();
	input = 0;
}

void applicationObjects::drawAscii()
{
	for (int y = 0; y < _imgsize->y; y++)
	{
		for (int x = 0; x < _imgsize->x; x++)
		{
			*_currcolor = _rawimg->getPixel(x,y);
			input = (int)(_currcolor->r *0.25f+_currcolor->g*0.65f+_currcolor->b*0.1f)%10;

			switch (input)
			{
			case 0:
				std::cout << " ";
				break;

			case 1:
				std::cout << "\'";
				break;

			case 2:
				std::cout << "!";
				break;

			case 3:
				std::cout << "?";
				break;

			case 4:
				std::cout << "|";
				break;

			case 5:
				std::cout << "x";
				break;

			case 6:
				std::cout << "X";
				break;

			case 7:
				std::cout << "0";
				break;

			case 8:
				std::cout << "0";
				break;

			case 9:
				std::cout << "#";
				break;

			case 10:
				std::cout << "$";
				break;
			}
		}
		std::cout << "\n";
	}
}

applicationObjects::~applicationObjects()
{
	delete this->_currcolor;
	delete this->_imgsize;
	delete this->_rawimg;
	delete& this->input;
}