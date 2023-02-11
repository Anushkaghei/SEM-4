#include<pthread.h>
#include<stdio.h>
#define NUM_THREADS 10
int sum;
void *runner(void *param);//threads call this function

int main(int argc, char *argv[])
{
    pthread_t tid; //thread identifier
    pthread_attr_t attr; //set of thread attributes

    if(argc!=2)
    {
        fprintf(stderr,"usage: a.out<integer value>\n");
        return -1;
    }
    if(atoi(argv[1])<0)
    {
        fprintf(stderr,"%d must be>=0\n",atoi(argv[1]));
        return -1;
    }

    pthread_attr_init(&attr); // get default atttributes
    pthread_create(&tid,&attr,runner,argv[1]); //create the thread
    pthread_join(tid,NULL);

    printf("sum=%d\n",sum);
}
void *runner(void *param)//thread will begin control in this function
{
    int i,upper=atoi(param);
    sum=0;
    for(i=0;i<=upper;i++)
        sum+=i;

    pthread_exit(0);
}

pthread_t workers[NUM_THREADS];

for(int i=0;i<NUM_THREADS;i++)
    pthread_join(workers[i],NULL);
