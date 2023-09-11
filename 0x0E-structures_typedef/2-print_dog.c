#include "dog.h"
#include <stdio.h>
/*name, type = char *
 *age, type = float
 *owner, type = char *
 *Return void
*/
void print_dog(struct dog *d){
	if(d){
		printf("Name:%s\n",d->name?name:"(nil)");
		printf("Age:%d\n",d->age);
		printf("Owner:%s\n",d->owner?owner:"(nil)");
	}
}

