#ifndef DOG_H
#define DOG_H

/**
 * struck dog - a dog's basic information
 * @name:name of a dog.
 * @age:age of a dog.
 * @owner:owner of a dog
 */
int main(void)
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif 
