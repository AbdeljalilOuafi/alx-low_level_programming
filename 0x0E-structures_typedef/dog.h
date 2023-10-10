#ifndef __DOG__
#define __DOG__

/**
 * struct dog - structure for a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: No description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* __DOG__ */
