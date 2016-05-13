#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[2];

void* doSomeThing(void *arg)
{
    pthread_t id = pthread_self();
    int a = 0;
    while (1) {
    	a = a + 1;
	if (a==10000){a=0;}
    }

    return NULL;
}

int main(void)
{
    int i = 0;
    int a = 0;
    int b = 0;
    int err;
    printf("scripted by Chu Lin\n");
    printf("Managed by Phong Nguyen\n");
    printf("team of Kim Le, June Zhao, Ray Wang\n");
    printf("How many thread: ");
    scanf("%d", &a);

    while(i < a)
    {
        err = pthread_create(&(tid[i]), NULL, &doSomeThing, NULL);
        if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        i++;
	
    }
    while (1){b =1;}
    return 0;
}
