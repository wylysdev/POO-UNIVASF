#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    implementação de TDA cubo e operações sobre ele | 03/06
*/

// == cubo.h ================

#define pi 3.14159265358979323846

typedef struct CILINDRO Cilindro;

struct CILINDRO {
    float altura; 
    float raio;
};

Cilindro *create_cilindro(float raio_local, float altura_local);

void cilindro_destroy(Cilindro *cubo_local);

float volume(Cilindro *cubo);

float area(Cilindro *cubo);

// == main ============

int main(){
    Cilindro *y = create_cilindro(6.0, 12.0);
    // float x = y->aresta;
    printf("\nraio: %f, altura: %f", y->raio, y->altura);
    printf("\narea: %f", area(y));
    // printf("\nvolume: %f",volume(y));
    return 0;
}

// == cubo.c ==============

float volume(Cilindro *cubo){
    // if(cubo){
    //     float volume = 0.0;
    //     volume = pow(cubo->aresta, 3.0);
    //     return volume;
    // }
    return 0.0;
}

Cilindro *create_cilindro(float raio_local, float altura_local){
    if(raio_local > 0.0 && altura_local > 0.0){
        Cilindro *x = malloc(sizeof(Cilindro));
        if(x){
            x->raio = raio_local;
            x->altura = altura_local;
            return x;
        }
    }
    printf("pane, o valor n pode ser zero\n");
    return NULL;
}

void cilindro_destroy(Cilindro *cubo_local){
    free(cubo_local);
}

float area(Cilindro *cilindro){
    if(cilindro){
        float area = (2 * pi * (cilindro->raio) * (cilindro->altura)) + (2 * pi * pow(cilindro->raio, 2));
        return area;
    }
    printf("Pane");
    return 0.0;
}