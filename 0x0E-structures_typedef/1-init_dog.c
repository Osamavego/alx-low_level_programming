#include "dog.h"
/*name, type = char *
 *age, type = float
 *owner, type = char *
 *return : void
*/
void init_dog(struct dog *d, char *name, float age, char *owner){
	if (d){
		d->name=mame;
		d->age=age;
		d->owner=owner;
	}
}
