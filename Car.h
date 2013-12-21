#pragma once

#include "Graphic.h"

namespace Game
{
	namespace PlayGame
	{

		class Car : public Graphic
		{
		public:
			Car();
			Car(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath);
			~Car();
			sf::Vector2f GetPosition();
			void SetPos( sf::Vector2f vPos );
			void SetDim(sf::Vector2f vDim);
			void SetSprite(std::string path) override;

		protected:
			virtual void Move() = 0;

		};

	}
}