#pragma once
#include "Car.h"

namespace Game
{
	namespace PlayGame
	{
		enum eLines
		{
			eFIRST = 41,
			eSECOND = 92,
			eTHIRD = 142,
			eFOURTH = 192
		};
		static int eTab[] = {
			eLines::eFIRST,
			eLines::eSECOND,
			eLines::eTHIRD,
			eLines::eFOURTH
		};
		class OpponentCar : public Car
		{
		public:
			OpponentCar();
			OpponentCar(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath);
			virtual ~OpponentCar();

			void Move() override;
			void SetSpeed(float fSpeed);
			void SetPointer( Game::PlayGame::Car& CPlayer );
			void RandomPos();

			bool Collision( Car& car );

		protected:
			float m_fMoveSpeed = 2.f;
			Game::PlayGame::Car* m_pcPlayer;
			eLines eOpponentCarLine;
		};
	}
}

