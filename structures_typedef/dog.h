#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog info
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog dog_t - new struct dog info
 */
typedef struct dog dog_t;

/*prototpes*/
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
#endif/*DOG_H*/
