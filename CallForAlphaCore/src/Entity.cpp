#include "Entity.h"
#include <iostream>

Entity::Entity() = default;

Entity::Entity(std::list<Texture2D> text, Vector2 pos) : texture(text), position(pos)
{

}

void Entity::Update()
{
    
}

void Entity::DrawUpdate()
{
    
}