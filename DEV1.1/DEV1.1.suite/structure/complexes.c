#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Nombre_complexe {
    double partie_reel;
    double partie_imaginaire;
} nombre;

nombre conjuge(nombre *nc) {   
    nombre nb;
    nb.partie_reel = nc->partie_reel;
    nb.partie_imaginaire = 0 - nc->partie_imaginaire;
    return nb;
}

double module(nombre *nc) {
    return sqrt(pow(nc->partie_reel, 2) + pow(nc->partie_imaginaire, 2));
}

double inverse(nombre *nc, nombre *conjuge_s) {
    return (conjuge_s->partie_reel + conjuge_s->partie_imaginaire) / ((nc->partie_reel + nc->partie_imaginaire) * (conjuge_s->partie_reel + conjuge_s->partie_imaginaire));
}

int main(void){
    nombre nombre_complexe = {2.3, 3.4};
    nombre nombre_complexe_conjuge = conjuge(&nombre_complexe);
    printf("%.2lf + (%.2lf)\n", nombre_complexe.partie_reel, nombre_complexe.partie_imaginaire);
    printf("%.2lf + (%.2lf)\n", nombre_complexe_conjuge.partie_reel, nombre_complexe_conjuge.partie_imaginaire);
    printf("%.2lf\n", module(&nombre_complexe));
    printf("%.2lf\n", inverse(&nombre_complexe, &nombre_complexe_conjuge));
    return EXIT_SUCCESS;
}