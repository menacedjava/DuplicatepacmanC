#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(600, 600), "Pac-Man");

    sf::CircleShape pacman(20.f);
    pacman.setFillColor(sf::Yellow);
    pacman.setPosition(280.f, 280.f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            pacman.move(-2.f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            pacman.move(2.f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            pacman.move(0.f, -2.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            pacman.move(0.f, 2.f);

        window.clear();
        window.draw(pacman);
        window.display();
    }

    return 0;
}
