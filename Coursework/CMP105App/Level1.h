#pragma once

#include "Framework/BaseLevel.h"
#include "Framework/GameObject.h"
#include "Framework/TileMap.h"
#include "Player.h"
#include "Framework/Collision.h"

class Level1 : BaseLevel {
public:
	Level1(sf::RenderWindow& window, Input& input, GameState& gameState);
	~Level1() override = default;

	void handleInput(float dt) override;
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.

	// Default variables for level class.
	TileMap m_tileMap;
	TileMap m_flag;
	TileMap m_switch;

	sf::Texture m_texture;
	Player m_player;

};