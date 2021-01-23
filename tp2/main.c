/* 
 * File:   main.c
 * Author: Ali Marzouk & Med Hazem Ben Hassine
 */

#include <time.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>



pthread_mutex_t segment_ap;
pthread_mutex_t segment_pl;
pthread_mutex_t segment_lg;
pthread_mutex_t segment_no;
pthread_mutex_t segment_bc;
pthread_mutex_t segment_rs;
pthread_mutex_t segment_st;
pthread_mutex_t segment_gm;
pthread_mutex_t segment_mn;
pthread_mutex_t segment_dc;
pthread_mutex_t segment_pk;
pthread_mutex_t segment_cf;
pthread_mutex_t segment_fg;
pthread_mutex_t segment_gh;
pthread_mutex_t segment_hi;
pthread_mutex_t segment_ir;
pthread_mutex_t segment_ef;
pthread_mutex_t segment_ij;
pthread_mutex_t segment_qn;
pthread_mutex_t segment_su;

void occupySegment()
{
    int milli_seconds = 1000 * 6;

    clock_t start = clock();

    while (clock() < start + milli_seconds);
}

void* Metro1(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_ap);
    printf("thread %d: Metro 1 occupe le segment AP\n",pid);
    occupySegment();
    printf("AP vide\n");
    pthread_mutex_unlock(&segment_ap);

    pthread_mutex_lock(&segment_pl);
    printf("thread %d: Metro 1 occupe le segment PL\n",pid);
    occupySegment();
    printf("PL vidée\n");
    pthread_mutex_unlock(&segment_pl);

    pthread_mutex_lock(&segment_lg);
    printf("thread %d: Metro 1 occupe le segment LG\n",pid);
    occupySegment();
    printf("LG vide\n");
    pthread_mutex_unlock(&segment_lg);

    pthread_mutex_lock(&segment_gm);
    printf("thread %d: Metro 1 occupe le segment GM\n",pid);
    occupySegment();
    printf("GM vide\n");
    pthread_mutex_unlock(&segment_gm);

    pthread_mutex_lock(&segment_mn);
    printf("thread %d: Metro 1 occupe le segment MN\n",pid);
    occupySegment();
    printf("MN vide\n");
    pthread_mutex_unlock(&segment_mn);

    pthread_mutex_lock(&segment_no);
    printf("thread %d: Metro 1 occupe le segment NO\n",pid);
    occupySegment();
    printf("NO vide\n");
    pthread_mutex_unlock(&segment_no);

    printf("thread %d: Metro 1 arrive a la station O!\n",pid);

    pthread_exit(NULL);
}

void* Metro2(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_bc);
    printf("thread %d: Metro 2 occupe le segment BC\n",pid);
    occupySegment();
    printf("BC vide\n");
    pthread_mutex_unlock(&segment_bc);

    pthread_mutex_lock(&segment_cf);
    printf("thread %d: Metro 2 occupe le segment CF\n",pid);
    occupySegment();
    printf("CF vidée\n");
    pthread_mutex_unlock(&segment_cf);

    pthread_mutex_lock(&segment_fg);
    printf("thread %d: Metro 2 occupe le segment FG\n",pid);
    occupySegment();
    printf("FG vide\n");
    pthread_mutex_unlock(&segment_fg);

    pthread_mutex_lock(&segment_gh);
    printf("thread %d: Metro 2 occupe le segment GH\n",pid);
    occupySegment();
    printf("GH vide\n");
    pthread_mutex_unlock(&segment_gh);

    pthread_mutex_lock(&segment_hi);
    printf("thread %d: Metro 2 occupe le segment HI\n",pid);
    occupySegment();
    printf("HI vide\n");
    pthread_mutex_unlock(&segment_hi);

    pthread_mutex_lock(&segment_ir);
    printf("thread %d: Metro 2 occupe le segment IR\n",pid);
    occupySegment();
    printf("IR vide\n");
    pthread_mutex_unlock(&segment_ir);

    pthread_mutex_lock(&segment_rs);
    printf("thread %d: Metro 2 occupe le segment RS\n",pid);
    occupySegment();
    printf("RS vide\n");
    pthread_mutex_unlock(&segment_rs);

    pthread_mutex_lock(&segment_st);
    printf("thread %d: Metro 2 occupe le segment ST\n",pid);
    occupySegment();
    printf("ST vide\n");
    pthread_mutex_unlock(&segment_st);

    printf("thread %d: Metro 2 arrive a la station T!\n",pid);

    pthread_exit(NULL);
}

void* Metro3(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_dc);
    printf("thread %d: Metro 3 occupe le segment DC\n",pid);
    occupySegment();
    printf("DC vide\n");
    pthread_mutex_unlock(&segment_dc);

    pthread_mutex_lock(&segment_cf);
    printf("thread %d: Metro 3 occupe le segment CF\n",pid);
    occupySegment();
    printf("CF vidée\n");
    pthread_mutex_unlock(&segment_cf);

    pthread_mutex_lock(&segment_fg);
    printf("thread %d: Metro 3 occupe le segment FG\n",pid);
    occupySegment();
    printf("FG vide\n");
    pthread_mutex_unlock(&segment_fg);

    pthread_mutex_lock(&segment_lg);
    printf("thread %d: Metro 3 occupe le segment GL\n",pid);
    occupySegment();
    printf("GL vide\n");
    pthread_mutex_unlock(&segment_lg);

    pthread_mutex_lock(&segment_pl);
    printf("thread %d: Metro 3 occupe le segment LP\n",pid);
    occupySegment();
    printf("LP vide\n");
    pthread_mutex_unlock(&segment_pl);

    pthread_mutex_lock(&segment_pk);
    printf("thread %d: Metro 3 occupe le segment PK\n",pid);
    occupySegment();
    printf("PK vide\n");
    pthread_mutex_unlock(&segment_pk);

    printf("thread %d: Metro 3 arrive a la station K!\n",pid);

    pthread_exit(NULL);
}

void* Metro4(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_ef);
    printf("thread %d: Metro 4 occupe le segment EF\n",pid);
    occupySegment();
    printf("EF vide\n");
    pthread_mutex_unlock(&segment_ef);

    pthread_mutex_lock(&segment_fg);
    printf("thread %d: Metro 4 occupe le segment FG\n",pid);
    occupySegment();
    printf("FG vide\n");
    pthread_mutex_unlock(&segment_fg);

    pthread_mutex_lock(&segment_gh);
    printf("thread %d: Metro 4 occupe le segment GH\n",pid);
    occupySegment();
    printf("GH vide\n");
    pthread_mutex_unlock(&segment_gh);

    pthread_mutex_lock(&segment_hi);
    printf("thread %d: Metro 4 occupe le segment HI\n",pid);
    occupySegment();
    printf("HI vide\n");
    pthread_mutex_unlock(&segment_hi);

    pthread_mutex_lock(&segment_ij);
    printf("thread %d: Metro 4 occupe le segment IJ\n",pid);
    occupySegment();
    printf("IJ vide\n");
    pthread_mutex_unlock(&segment_ij);

    printf("thread %d: Metro 4 arrive a la station J!\n",pid);

    pthread_exit(NULL);
}

void* Metro5(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&segment_qn);
    printf("thread %d: Metro 5 occupe le segment QN\n",pid);
    occupySegment();
    printf("QN vide\n");
    pthread_mutex_unlock(&segment_qn);

    pthread_mutex_lock(&segment_mn);
    printf("thread %d: Metro 5 occupe le segment NM\n",pid);
    occupySegment();
    printf("NM vidée\n");
    pthread_mutex_unlock(&segment_mn);

    pthread_mutex_lock(&segment_gm);
    printf("thread %d: Metro 5 occupe le segment MG\n",pid);
    occupySegment();
    printf("MG vide\n");
    pthread_mutex_unlock(&segment_gm);

    pthread_mutex_lock(&segment_gh);
    printf("thread %d: Metro 5 occupe le segment GH\n",pid);
    occupySegment();
    printf("GH vide\n");
    pthread_mutex_unlock(&segment_gh);

    pthread_mutex_lock(&segment_hi);
    printf("thread %d: Metro 5 occupe le segment HI\n",pid);
    occupySegment();
    printf("HI vide\n");
    pthread_mutex_unlock(&segment_hi);

    pthread_mutex_lock(&segment_ir);
    printf("thread %d: Metro 5 occupe le segment IR\n",pid);
    occupySegment();
    printf("IR vide\n");
    pthread_mutex_unlock(&segment_ir);

    pthread_mutex_lock(&segment_rs);
    printf("thread %d: Metro 5 occupe le segment RS\n",pid);
    occupySegment();
    printf("RS vide\n");
    pthread_mutex_unlock(&segment_rs);

    pthread_mutex_lock(&segment_su);
    printf("thread %d: Metro 5 occupe le segment SU\n",pid);
    occupySegment();
    printf("SU vide\n");
    pthread_mutex_unlock(&segment_su);

    printf("thread %d: Metro 5 arrive a la station U!\n",pid);

    pthread_exit(NULL);
}



int main()
{
    int i;
    pthread_t id;

    for(i=0; i<2;i++)
    {
        int* j=(int*)malloc(sizeof(int));
        *j=i;
        pthread_create(&id,NULL,Metro1,j);
        pthread_create(&id,NULL,Metro2,j);
        pthread_create(&id,NULL,Metro3,j);
        pthread_create(&id,NULL,Metro4,j);
        pthread_create(&id,NULL,Metro5,j);
    }

    pthread_exit(NULL);
}