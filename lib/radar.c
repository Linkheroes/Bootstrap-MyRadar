/*
** EPITECH PROJECT, 2022
** -B-MUL-100-TLS-1-1-bsmyradar-alexandre.ricard
** File description:
** radar
*/

#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include "my.h"

sfCircleShape *create_circle(sfVector2f pos, float radius)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setPosition(circle, pos);
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setOutlineThickness(circle, 1);
    sfCircleShape_setOutlineColor(circle, sfWhite);

    return circle;
}
