#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new user made type dog
 * @name: pointer to name
 * @age: member
 * @owner: owner member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef new name for type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
