#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog informations
 * @name: his name (string)
 * @age: his age (float)
 * @owner: his owner (tring)
 */
struct dog
{
		char *name;
		float age;
		char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
