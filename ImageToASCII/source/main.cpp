#pragma once
#include "pch.h"
#include "applicationObjects.h"
#include <Windows.h>

int main(int argc, char* argv[])
{
	SetConsoleTitle(L"IMAGE TO ASCII TEXT");
	applicationObjects* _appobjs = new applicationObjects("original.jpg");
	_appobjs->drawAscii();
	free(_appobjs);

	std::string s;
	std::cin >>s;
	delete& s;
	delete _appobjs;
	return 0;
}