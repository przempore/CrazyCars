#include "Player.h"


namespace Game
{
	namespace PlayGame
	{

		Player::Player()
		{
		}

		Player::Player(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath) : Car(vPos, vDim, filePath)
		{

		}


		Player::~Player()
		{
		}
		void Player::Move()
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && m_fXPosition >= 23.f)
			{
				m_sSprite.setPosition(sf::Vector2f(m_fXPosition -= m_cfMoveSpeed, m_fYPosition));
				m_sSprite.setRotation(-5.f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && m_fXPosition <= 218.f)
			{
				m_sSprite.setPosition(sf::Vector2f(m_fXPosition += m_cfMoveSpeed, m_fYPosition));
				m_sSprite.setRotation(5.f);
			}
			else
			{
				m_sSprite.setRotation(0.f);
			}
		}

	}
}