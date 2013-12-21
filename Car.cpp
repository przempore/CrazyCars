#include "Car.h"

namespace Game
{
	namespace PlayGame
	{

		Car::Car()
		{}

		Car::Car(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath) : Graphic(vPos, vDim, filePath)
		{
		}


		Car::~Car()
		{
		}
		sf::Vector2f Car::GetPosition()
		{
			return sf::Vector2f(m_fXPosition, m_fYPosition);
		}

		void Car::SetPos(sf::Vector2f vPos)
		{

			m_fXPosition = vPos.x;
			m_fYPosition = vPos.y;
		}

		void Car::SetDim(sf::Vector2f vDim)
		{
			m_fDimX = vDim.x;
			m_fDimY = vDim.y;
		}

		void Car::SetSprite(std::string path)
		{
			Graphic::SetSprite(path);
		}

	}
}