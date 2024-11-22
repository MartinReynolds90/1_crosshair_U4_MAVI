#include "SFML/Graphics.hpp"

using namespace sf;

int main() {
	RenderWindow ventana(VideoMode(800, 600), "Croshair");
	Sprite sp_crosshair;
	Texture tx_crosshair;
	tx_crosshair.loadFromFile("crosshair.png");
	sp_crosshair.setTexture(tx_crosshair);
	sp_crosshair.setOrigin(64.f, 64.f);
	sp_crosshair.setPosition(ventana.getSize().x / 2, ventana.getSize().y / 2);

	while (ventana.isOpen()) {
		ventana.clear(Color::Black);
		ventana.draw(sp_crosshair);
		ventana.display();

	}
	return 0;
}
