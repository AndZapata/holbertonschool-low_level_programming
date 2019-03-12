#ifndef DOG
#define DOG

/**
 * struct dog - Define the structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: Structure that ask some data for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG */
