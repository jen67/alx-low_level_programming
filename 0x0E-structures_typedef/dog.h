#ifndef DOG_H
#define DOG_H
/**
 * strct dog-A new type describing a dog.
 * @name: the name of the dog.
 * @owner: the owner of the dog.
 * @age:the age of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog_t-Typedef for struct dog
 */
typedef struct dog dog_t;

void int-dog(struct dog *d, char name,*name,float age,char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name,float age,*owner);
void free_dog(dog_t *d);
#endif
