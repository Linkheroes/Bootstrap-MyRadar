/*
** EPITECH PROJECT, 2022
** -B-MUL-100-TLS-1-1-bsmyradar-alexandre.ricard
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <SFML/Graphics.h>

    //window manager
    sfRenderWindow *createWindow(sfVideoMode mode, char *name);
    void closeWindow(sfRenderWindow *window);
    void destroyWindow(sfRenderWindow *window);
    void clearWindow(sfRenderWindow *window);
    void displayWindow(sfRenderWindow *window);

    //radar
    sfCircleShape *create_circle(sfVector2f pos, float radius);


#endif /* !MY_H_ */
