#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog data.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;



#endif /* DOG_H */
