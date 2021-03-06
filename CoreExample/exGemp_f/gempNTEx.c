/* Created by RJudd */
/* SPAWARSYSCEN D881 */
/**********************************************************************
// For TASP VSIPL Documentation and Code neither the United States    /
// Government, the United States Navy, nor any of their employees,    /
// makes any warranty, express or implied, including the warranties   /
// of merchantability and fitness for a particular purpose, or        /
// assumes any legal liability or responsibility for the accuracy,    /
// completeness, or usefulness of any information, apparatus,         /
// product, or process disclosed, or represents that its use would    /
// not infringe privately owned rights                                /
**********************************************************************/
/* $Id: gempNTEx.c,v 2.0 2003/02/22 15:40:23 judd Exp $ */

#include <stdio.h>
#include<vsip.h>

#define M  3
#define N  4
#define P  5
#define L  3
#define alpha 2.0
#define beta  3.5

int main(){vsip_init((void*)0);
{
   void VU_mprint_f(vsip_mview_f*);
   void VU_mfill_f(vsip_mview_f*, vsip_scalar_f);
   vsip_mview_f *A = vsip_mcreate_f(N,M,VSIP_ROW,0),
                *B = vsip_mcreate_f(P,M,VSIP_ROW,0),
                *C = vsip_mcreate_f(N,P,VSIP_ROW,0);
   int row, col,i;
   for(row=0;row<N;row++) for(col=0;col<M;col++)
        vsip_mput_f(A,row,col,1 + sqrt(col*row));
   
   for(row=0;row<P;row++) for(col=0;col<M;col++)
        vsip_mput_f(B,row,col,1 + row * col);
   
   printf("\n A input \n");
   VU_mprint_f(A);
   printf("\n B input \n");
   VU_mprint_f(B);
   VU_mfill_f(C,0);
   printf("alpha= %f, beta= %f,\n",alpha,beta);
   {
      vsip_mat_op OpA = VSIP_MAT_NTRANS;
      vsip_mat_op OpB = VSIP_MAT_TRANS;
      printf("OpA %i; OpB %i\n",OpA,OpB);
      for(i=0; i<L; i++){
         vsip_gemp_f(alpha,A,OpA,B,OpB,beta,C);
         printf("C number %i\n",i); VU_mprint_f(C); 
      }
   }
   vsip_malldestroy_f(A);
   vsip_malldestroy_f(B);
   vsip_malldestroy_f(C);
   } vsip_finalize((void*)0); return 0;
}
void VU_mprint_f(vsip_mview_f *X)
{
    vsip_length RL = vsip_mgetrowlength_f(X);
    vsip_length CL = vsip_mgetcollength_f(X);
    vsip_length row,col;
    vsip_scalar_f x;
    printf("[\n");
    for(row=0; row<CL; row++){
      for(col=0; col<RL; col++){
        x=vsip_mget_f(X,row,col);
        printf("%6.4f %s",x,((col==(RL-1)) ? ";" : " "));
      }  
      printf("\n");
    }
    printf("];\n");
    return;
}
void VU_mfill_f(vsip_mview_f *X, vsip_scalar_f a)
{
    vsip_length RL = vsip_mgetrowlength_f(X);
    vsip_length CL = vsip_mgetcollength_f(X);
    vsip_length row,col;
    for(row=0; row<CL; row++)
      for(col=0; col<RL; col++)
        vsip_mput_f(X,row,col,a);
    return;
}
     
/* expected output */
/* A input 
/ [
/ 1.0000  1.0000  1.0000 ;
/ 1.0000  2.0000  2.4142 ;
/ 1.0000  2.4142  3.0000 ;
/ 1.0000  2.7321  3.4495 ;
/ ];
/ 
/  B input 
/ [
/ 1.0000  1.0000  1.0000  1.0000  1.0000 ;
/ 1.0000  2.0000  3.0000  4.0000  5.0000 ;
/ 1.0000  3.0000  5.0000  7.0000  9.0000 ;
/ ];
/ alpha= 2.000000, beta= 3.500000,
/ OpA 0
/ C number 0
/ [
/ 6.0000  12.0000  18.0000  24.0000  30.0000 ;
/ 10.8284  24.4853  38.1421  51.7990  65.4558 ;
/ 12.8284  29.6569  46.4853  63.3137  80.1421 ;
/ 14.3631  33.6251  52.8872  72.1493  91.4113 ;
/ ];
/ C number 1
/ [
/ 27.0000  54.0000  81.0000  108.0000  135.0000 ;
/ 48.7279  110.1838  171.6396  233.0955  294.5513 ;
/ 57.7279  133.4558  209.1838  284.9117  360.6396 ;
/ 64.6339  151.3131  237.9924  324.6717  411.3510 ;
/ ];
/ C number 2
/ [
/ 100.5000  201.0000  301.5000  402.0000  502.5000 ;
/ 181.3762  410.1285  638.8807  867.6332  1096.3853 ;
/ 214.8762  496.7523  778.6285  1060.5046  1342.3806 ;
/ 240.5816  563.2211  885.8607  1208.5002  1531.1396 ;
/ ]; */
