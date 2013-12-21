#ifdef SFML_STATIC
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")  
#endif // SFML_STATIC


#include "Background.h"
#include "Car.h"
#include "Player.h"
#include "OpponentCar.h"

using namespace Game::PlayGame;

int main()
{
	sf::RenderWindow window(sf::VideoMode(288, 512), "Crazy cars!");
	Background bBbackground(sf::Vector2f( 0.f, 0.f ), sf::Vector2f( 288.f, 512.f ), "img/label.png");
	Background bBbackground2(sf::Vector2f(0.f, -512.f), sf::Vector2f(288.f, 512.f), "img/label.png");
	Player cPlayer(sf::Vector2f(eLines::eFOURTH, 420.f), sf::Vector2f( 29.f, 74.f ), "img/main_car.png");
	OpponentCar oOpponentCar(sf::Vector2f(eLines::eFIRST, 0.f), sf::Vector2f( 33.f, 65.f ), "img/car.png");
	oOpponentCar.SetPointer(cPlayer);

	const int ciOpponentSize = 5;
	OpponentCar aCopponentCar[ciOpponentSize];

	int tmpX = static_cast<eLines>(rand() % sizeof eTab / sizeof eTab[0]);
	for (int i = 0; i < ciOpponentSize; ++i)
	{
		aCopponentCar[i].RandomPos();
		aCopponentCar[i].SetDim(sf::Vector2f(33.f, 65.f));
		aCopponentCar[i].SetSprite("img/car.png");
		aCopponentCar[i].SetPointer(cPlayer);
	}

	while (window.isOpen())
	{
		sf::Clock clock;
		while (clock.getElapsedTime().asMilliseconds() < 5);

		oOpponentCar.Move();

		for (int i = 0; i < ciOpponentSize; ++i)
		{
			aCopponentCar[i].Move();
		}
		cPlayer.Move();
		bBbackground.Move();
		bBbackground2.Move();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				window.close();
			}
		}


		window.draw(bBbackground);
		window.draw(bBbackground2);
		window.draw(oOpponentCar);
		for (int i = 0; i < ciOpponentSize; ++i)
		{
			window.draw(aCopponentCar[i]);
		}
		window.draw(cPlayer);
		window.display();
		window.clear();
		clock.restart();
	}

	return 0;
}