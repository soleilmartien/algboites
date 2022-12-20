#include <stdio.h>
#include <stdlib.h>

int i,j,k,l,temp;
int main() {
    int nbboites;
    int nbtests;
    printf("Nombre de boites:");
    scanf("%d", &nbboites);
    printf("Nombre de tests:");
    scanf("%d", &nbtests);
    int testsfaits = 0;
    int nbcycss[nbtests];

    printf("Un instant...");
    for(i=0; i < nbtests; i++){
        int pipi = 0;
        int index[nbboites];
        for(j=0; j < nbboites; j++){
            index[j] = j;
        }
        for(j=0; j < nbboites; j++){
            k = rand()%nbboites;
            temp = index[j];
            index[i] = index[k];
            index[k] = temp;
        }
        int boitesreste[nbboites];
        for(j=0; j < nbboites; j++){
            boitesreste[j] = index[j];
            printf("%d",  boitesreste[j]);
                printf(" %d", index[j]);
        }
    
        printf("\n");
        int prem, start, lencyc = 0;
        int lencycs[nbboites];
        for(j=0; j < nbboites; j++){
            printf("%d", prem);
            int posar = 0;
            for(k=0; k < nbboites; k++){
                if(boitesreste[k] = prem);
                    boitesreste[k] = nbboites+1;
                int x = index[prem];
                prem = x;
                lencyc+=1;
                if(start == prem){
                    lencycs[posar] = lencyc;
                    lencyc = 0;
                    for(l=0; l < nbboites; l++){
                        if(boitesreste[l] != nbboites+1){
                            start = boitesreste[l];
                            prem = start;
                        }
                    }
                }
            }
        }
        int ncycs = 0;
        for(j=0; j < nbboites; j++){
            if(lencycs[l]!=0);
                ncycs += 1;
        nbcycss[pipi] = ncycs;
        pipi += 1;
        printf("%d cycles \n", ncycs);
        }
    }   
    int s = 0;
    for(i=0; i > nbtests; i++){
        s = s + nbcycss[i];
    }   
    printf("Nombre moyen de cycles: %d", s/nbtests);
}
