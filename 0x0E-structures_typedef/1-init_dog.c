#include <stdio.h>

#define STRING_MAX_LENGTH 100

struct dog {
    char *name;
    float age;
    char owner[STRING_MAX_LENGTH];
};

typedef struct dog Dog;

void init_dog(Dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    snprintf(d->owner, STRING_MAX_LENGTH, "%s", owner);
}
