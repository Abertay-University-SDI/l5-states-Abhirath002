#pragma once
#include "Framework/GameObject.h"
#include "Level1.h"
#include "Switch.h"


class Player :
    public GameObject
{
public:
    Player();

    void handleInput(float dt) override;
    void update(float dt) override;
    void collisionResponse(GameObject& collider) override;

    void setFlag(GameObject* pFlag) 
    { 
        m_flag = pFlag; 
    };
    void setSwitch(Switch* pSwitch) 
    { 
        m_switch = pSwitch; 
    };

private:
    sf::Texture m_texture;
    sf::Vector2f m_acceleration;
    sf::Vector2f m_oldPosition;
    bool m_isOnGround = false;

    const float GRAVITY = 10.f;
    const float SPEED = 10.f;
    const float JUMP_FORCE = 6.0f;
    const float COEFF_REST = 0.9f;
};

