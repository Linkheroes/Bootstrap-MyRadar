/*
** EPITECH PROJECT, 2022
** -B-MUL-100-TLS-1-1-bsmyradar-alexandre.ricard
** File description:
** main
*/

#include <SFML/Graphics.h>
#include "my.h"

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    char *name = "My Radar";    
    sfRenderWindow *window = createWindow(mode, name);
    sfCircleShape *circle_one = create_circle((sfVector2f){mode.width / 2 - 50, mode.height / 2 - 50}, 150.0);
    sfCircleShape *circle_two = create_circle((sfVector2f){mode.width / 2, mode.height / 2}, 150.0);
    while (sfRenderWindow_isOpen(window)) {
        clearWindow(window);
        sfRenderWindow_drawCircleShape(window, circle_one, NULL);
        sfRenderWindow_drawCircleShape(window, circle_two, NULL);
        displayWindow(window);
    }
    destroyWindow(window);
    return 0;
}