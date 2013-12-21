#pragma once

#include <SFML/Graphics.hpp>
namespace Game
{
	namespace PlayGame
	{

		class Graphic : public sf::Drawable
		{
		public:
			Graphic();
			Graphic(sf::Vector2f vPos, sf::Vector2f vDim, std::string filePath);
			~Graphic();

			virtual void SetSprite(std::string path);
		protected:
			sf::Texture m_tTexture;
			sf::Sprite m_sSprite;
			float m_fXPosition, m_fYPosition;
			float m_fDimX, m_fDimY;

			virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		};

	}
}