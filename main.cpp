#include <iostream>
#include <allegro.h>
#include <Juego.h>
#include<inicia.h>


using namespace std;
void pintar_nivel(int num_nivel,BITMAP * pantalla);
int main()
{
    srand(time(NULL));


    Juego jg;


    while(!key[KEY_ENTER]){

        pintar_nivel(jg.getNumeroNivel(),jg.getPantalla());
    }
    jg.jugar(jg.getNumeroNivel());
    return 0;
}
END_OF_MAIN();


void pintar_nivel(int num_nivel,BITMAP * pantalla)
{

     BITMAP * enemigobmp  = load_bitmap("img/fondo1.bmp", NULL);

    switch(num_nivel)
    {

    case 1:
            blit(enemigobmp, pantalla, 0, 0, 0, 0,725,500);
            draw_sprite(screen, enemigobmp, 0, 0);

        break;

    default:
            textout_centre_ex(screen, font, "HAS GANADO",370,260,0XFBFF00,0X000000);

    }
}
