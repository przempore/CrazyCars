#include "Background.h"

namespace Game
{
	namespace PlayGame
	{


		Background::Background()
		{
		}


		Background::~Background()
		{
		}


		Background::Background(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath) : Graphic(vPos, vDim, filePath)
		{
			SetSprite(filePath);
		}

		void Background::Move()
		{
			m_sSprite.setPosition(sf::Vector2f(m_fXPosition, m_fYPosition += m_fMoveSpeed));
			if (m_fYPosition >= m_fDimY)
			{
				m_fYPosition = -m_fDimY;
			}
		}

	}
}