#pragma once
#include "Car.h"

namespace Game
{
	namespace PlayGame
	{
		class Player : public Car
		{
		public:
			Player();
			Player(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath);
			~Player();

			void Move() override;

		protected:
			const float m_cfMoveSpeed = 1.f;
		};

	}
}