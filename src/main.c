#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct entity {
  float alter;
  char *ymar;
  void (*show)(struct entity *);
  void (*setAlter)(struct entity *, float);
  void (*setYmar)(struct entity *, char[]);
} Entity;

void print(Entity *self) {
  printf("\nInner Alter : %.2f\nInner Ymar : %s\n", self->alter, self->ymar);
}

void setAlterfunc(Entity *self, float alter) { self->alter = alter; }

void setYmarfunc(Entity *self, char ymar[]) {
  // free(self->ymar);
  // self->ymar = malloc(sizeof(char));
  strcpy(self->ymar, ymar);
}

Entity *newEntity(float alter, char ymar[]) {
  Entity *self = (Entity *)malloc(sizeof(Entity));
  self->alter = alter;
  self->ymar = malloc(sizeof(char));
  strcpy(self->ymar, ymar);
  self->show = &print;
  self->setAlter = &setAlterfunc;
  self->setYmar = &setYmarfunc;
  return self;
}

int main() {
  Entity *rynir = newEntity(35.7, "Vytar");
  rynir->show(rynir);

  rynir->setAlter(rynir, 62.81);
  rynir->setYmar(rynir, "Ahrdren");

  rynir->show(rynir);

  free(rynir->ymar);
  free(rynir);

  return 0;
}