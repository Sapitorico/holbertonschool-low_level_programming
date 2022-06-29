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
typedef struct dog dog_t;

/*prototpes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif/*DOG_H*/
