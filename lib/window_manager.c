/*
** EPITECH PROJECT, 2022
** -B-MUL-100-TLS-1-1-bsmyradar-alexandre.ricard
** File description:
** window_manager
*/

#include <SFML/Graphics.h>
#include "my.h"

sfRenderWindow *createWindow(sfVideoMode mode, char *name)
{
    sfRenderWindow *window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}

void closeWindow(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void destroyWindow(sfRenderWindow *window)
{
    sfRenderWindow_destroy(window);
}

void clearWindow(sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
}

void displayWindow(sfRenderWindow *window)
{
    sfRenderWindow_display(window);
}
