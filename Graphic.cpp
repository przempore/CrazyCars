#include "Graphic.h"

namespace Game
{
	namespace PlayGame
	{

		Graphic::Graphic()
		{

		}

		Graphic::Graphic(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath)
		{
			m_fXPosition = vPos.x;
			m_fYPosition = vPos.y;
			m_fDimX = vDim.x;
			m_fDimY = vDim.y;
			SetSprite(filePath);
		}


		Graphic::~Graphic()
		{
		}



		void Graphic::draw(sf::RenderTarget& target, sf::RenderStates states) const
		{
			target.draw(m_sSprite, states);
		}

		void Graphic::SetSprite(std::string path)
		{
			if (m_tTexture.loadFromFile(path))
			{
				m_sSprite.setTexture(m_tTexture);
				m_sSprite.setPosition(this->m_fXPosition, this->m_fYPosition);
			} // if
		}
	}
}