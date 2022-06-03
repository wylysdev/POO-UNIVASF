#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    implementação de TDA cubo e operações sobre ele | 03/06
*/

// == cubo.h ================

typedef struct CUBO Cubo;

struct CUBO {
    float aresta;  
};

Cubo *create_cubo(float aresta_local);

void cubo_destroy(Cubo *cubo_local);

float volume(Cubo *cubo);

// == main ============

int main(){
    Cubo *y = create_cubo(2.0);
    float x = y->aresta;
    printf("\naresta: %f", x);
    printf("\nvolume: %f",volume(y));
    return 0;
}

// == cubo.c ==============

float volume(Cubo *cubo){
    if(cubo){
        float volume = 0.0;
        volume = pow(cubo->aresta, 3.0);
        return volume;
    }
    return 0.0;
}

Cubo *create_cubo(float aresta_local){
    if(aresta_local <= 0.0){
        Cubo *x = malloc(sizeof(Cubo));
        if(x){
            x->aresta = aresta_local;
            return x;
        }
    }
    printf("pane, o valor n pode ser zero\n");
    return NULL;
}

void cubo_destroy(Cubo *cubo_local){
    free(cubo_local);
}
