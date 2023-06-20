#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure defining a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = malloc(sizeof(char) * 20); /* Allocating memory for name */
	my_dog.owner = malloc(sizeof(char) * 20); /* Allocating memory for owner */

	if (my_dog.name == NULL || my_dog.owner == NULL)
	{
		printf("Memory allocation failed.\n");
		exit(1);
	}

	/* Assigning values to the struct members */
	my_dog.name = "Buddy";
	my_dog.age = 2.5;
	my_dog.owner = "John Doe";

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	free(my_dog.name); /* Freeing allocated memory for name */
	free(my_dog.owner); /* Freeing allocated memory for owner */

	return (0);
}
