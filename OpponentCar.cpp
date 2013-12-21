#include "OpponentCar.h"

#include<time.h>

namespace Game
{
	namespace PlayGame
	{

		OpponentCar::OpponentCar()
		{
		}

		OpponentCar::OpponentCar(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath) : Car(vPos, vDim, filePath)
		{
			m_pcPlayer = NULL;
			eOpponentCarLine = eFIRST;
			vPos.x = static_cast<float>(eOpponentCarLine);
		}

		OpponentCar::~OpponentCar()
		{
		}


		void OpponentCar::Move()
		{
			//srand(time(NULL));
			m_sSprite.setPosition(sf::Vector2f(m_fXPosition, m_fYPosition += m_fMoveSpeed));
			if (m_fYPosition >= 512.f)
			{
				//int tmpX = rand() % (static_cast<int>(m_pcPlayer->GetPosition().x) - 25) + (static_cast<int>(m_pcPlayer->GetPosition().x) - 25);
				RandomPos();
			}
		}


		void OpponentCar::SetSpeed(float fSpeed)
		{
			m_fMoveSpeed = fSpeed;
		}

		void OpponentCar::SetPointer(Game::PlayGame::Car& CPlayer)
		{
			if (!m_pcPlayer)
			{
				m_pcPlayer = &CPlayer;
			}
		}

		void OpponentCar::RandomPos()
		{
			int tmpX = static_cast<eLines>(rand() % sizeof eTab / sizeof eTab[0]);
			int tmpY = rand() % 1000;
			m_fXPosition = static_cast<float>(eTab[tmpX]);
			m_fYPosition = static_cast<float>(-tmpY);
		}

		bool OpponentCar::Collision(Car& car)
		{
			if (car.GetPosition().x <= (m_fXPosition + m_fDimX))
			{

			}
		}

	}
}