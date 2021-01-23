/* 
 * File:   main.c
 * Author: Ali Marzouk & Med Hazem Ben Hassine
 */

#include <time.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>



pthread_mutex_t segment_ab;
pthread_mutex_t segment_bc;
pthread_mutex_t segment_ce;
pthread_mutex_t segment_cd;
pthread_mutex_t segment_bf;


void occupySegment()
{
    int milli_seconds = 1000 * 6;

    clock_t start = clock();

    while (clock() < start + milli_seconds);
}

void* Metro1(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_ab);
    printf("thread %d: Metro 1 occupe le segment AB\n",pid);
    occupySegment();
    printf("AB Segment Libre\n");
    pthread_mutex_unlock(&segment_ab);

    pthread_mutex_lock(&segment_bc);
    printf("thread %d: Metro 1 occupe le segment BC\n",pid);
    occupySegment();
    printf("BC Segment Libre\n");
    pthread_mutex_unlock(&segment_bc);

    pthread_mutex_lock(&segment_cd);
    printf("thread %d: Metro 1 occupe le segment CD\n",pid);
    occupySegment();
    printf("CD Segment Libre\n");
    pthread_mutex_unlock(&segment_cd);

    printf("thread %d: Metro 1 arrive a la station D!\n",pid);

    pthread_exit(NULL);
}

void* Metro2(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_ce);
    printf("thread %d: Metro 2 occupe le segment EC\n",pid);
    occupySegment();
    printf("CE Segment Libre\n");
    pthread_mutex_unlock(&segment_ce);

    pthread_mutex_lock(&segment_bc);
    printf("thread %d: Metro 2 occupe le segment CB\n",pid);
    occupySegment();
    printf("BC Segment Libre\n");
    pthread_mutex_unlock(&segment_bc);

    printf("thread %d: Metro 2 arrive a la station B !\n",pid);

    pthread_exit(NULL);
}

void* Metro3(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_bf);
    printf("thread %d: Metro 3 occupe le segment FB\n",pid);
    occupySegment();
    printf("BF Segment Libre\n");
    pthread_mutex_unlock(&segment_bf);

    pthread_mutex_lock(&segment_ab);
    printf("thread %d: Metro 3 occupe le segment BA\n",pid);
    occupySegment();
    printf("AB Segment Libre\n");
    pthread_mutex_unlock(&segment_ab);

    printf("thread %d: Metro 3 arrive a la station  A !\n",pid);

    pthread_exit(NULL);
}



int main()
{
    int i;
    pthread_t id;

    for(i=0; i<3;i++)
    {
        int* j=(int*)malloc(sizeof(int));
        *j=i;
        pthread_create(&id,NULL,Metro1,j);
        pthread_create(&id,NULL,Metro2,j);
        pthread_create(&id,NULL,Metro3,j);
    }

    pthread_exit(NULL);
}