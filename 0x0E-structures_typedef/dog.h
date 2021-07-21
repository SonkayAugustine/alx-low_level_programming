#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Creates a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name of the dog
 *
 * Description: Creates a dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_p - Typedef for struct dog
 */
typedef struct dog dog_p;

#endif /* DOG */
