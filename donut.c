#include <math.h>
#include <stdio.h>
#include <string.h>

int k;

void main(){
    float A=0, B=0, i, j, z[1760];
    char b[1760];

    printf("\x1b[2J");

    float sini, cosj, sinA, sinj, cosA, cosj2, mess, cosi, cosB, sinB, t;
    int x,y,o,N;

    for(; ; ) {

        memset(b,32,1760);
        memset(z,0,7040);

        for(j=0; 6.28>j; j+=0.07) {
            for(i=0; 6.28 >i; i+=0.02) {

                sini=sin(i),
                sinA=sin(A),
                sinj=sin(j),
                sinB=sin(B);

                cosj=cos(j),
                cosA=cos(A),
                cosj2=cosj+2,
                cosi=cos(i),
                cosB=cos(B);

                mess=1/(sini*cosj2*sinA+sinj*cosA+5);
                t=sini*cosj2*cosA-sinj* sinA;

                x=40+30*mess*(cosi*cosj2*cosB-t*sinB),
                y= 12+15*mess*(cosi*cosj2*sinB +t*cosB),
                o=x+80*y,
                N=8*((sinj*sinA-sini*cosj*cosA)*cosB-sini*cosj*sinA-sinj*cosA-cosi *cosj*sinB);

                if(22>y && y>0 && x>0 && 80>x && mess>z[o]){
                    z[o]=mess;
                    b[o]=".,-~:;=!*#$@"[ N>0 ? N : 0];
                }
            }
        }

        printf("\x1b[d");

        for(k=0; 1761>k; k++){
            putchar( k%80 ? b[k] : 10);
        }

        A+=0.04;
        B+= 0.02;
    }
}