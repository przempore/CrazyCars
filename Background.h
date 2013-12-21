#pragma once
#include <string>
#include "Graphic.h"

namespace Game
{
	namespace PlayGame
	{


		class Background : public Graphic
		{
		public:
			Background();
			Background(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath);
			virtual ~Background();

			void Move();

		protected:
			float m_fMoveSpeed = 1.f;
		};

	}
}