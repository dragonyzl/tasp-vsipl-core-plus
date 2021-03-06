/* Created by RJudd */
/* SPAWARSYSCEN D857 */
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

/* $Id: fir_n3_N67_D3_NS_f.h,v 2.1 2007/04/18 17:05:52 judd Exp $ */
static void fir_n3_N67_D3_NS_f(){
   printf("********\nTEST fir_n3_N67_D3_NS_f\n");
   {
      vsip_length N = 67;
      vsip_length n = 0;
      vsip_length D = 3;
      vsip_length L=0;
      vsip_length ML=0;
      int i;
      int num=3;
      vsip_vattr_f vattr;
      vsip_scalar_f k_data[]  = {
              1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
      vsip_scalar_f in_data[] = {0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 

              0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 

              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1,
              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
      vsip_scalar_f ans_data[] = {0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 

              0.1, 0.2, 0.3, 0.4,
              0.4, 0.4, 0.4, 0.4, 0.4, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 

              0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0,
              0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
              0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0.0};
       vsip_block_f *k_block = vsip_blockbind_f(k_data,10,VSIP_MEM_NONE);
       vsip_block_f *in_block = vsip_blockbind_f((vsip_scalar_f*)NULL,201,VSIP_MEM_NONE);
       vsip_block_f *ans_block = vsip_blockbind_f(ans_data,201,VSIP_MEM_NONE);
       vsip_vview_f *k = vsip_vbind_f(k_block,0,1,10);
       vsip_vview_f *in = vsip_vbind_f(in_block,0,1,67);
       vsip_vview_f *ans = vsip_vbind_f(ans_block,0,1,201);

       vsip_block_f *block = vsip_blockcreate_f(500,VSIP_MEM_NONE);
       vsip_vview_f *in_V  = vsip_vbind_f(block,490,-3,67);
       vsip_vview_f *out_V = vsip_vbind_f(block,9,2,67);
       vsip_vview_f *k_V   = vsip_vbind_f(block,145,3,10);

       vsip_fir_f *fir;
       vsip_blockadmit_f(k_block,VSIP_TRUE);
       vsip_blockadmit_f(ans_block,VSIP_TRUE);
       vsip_vcopy_f_f(k,k_V);
       fir = vsip_fir_create_f(
                       k_V, /* kernel */
             VSIP_NONSYM, /* lets use the whole thing */
                       N, /* length input */
                       D, /* decimation */
         VSIP_STATE_NO_SAVE, /* save state */
                       0,
                       0);
       
       printf("N = %d\nD = %d\n",N,D);
       printf("fir = vsip_fir_create_f( k,\n VSIP_NONSYM,\n N,\n D,\n VSIP_STATE_NO_SAVE,\n 0,\n 0)\n");
       printf("kernel\n");VU_vprintm_f("3.2",k_V);
       /* set max length of output vector */
       ML = (N)/D;
       if((N)%D) ML+=1;
       vsip_vputlength_f(out_V,ML);
       /* set length and stride of answer vector */
       L = N/D;
       if(N%D) L += 1;
       vsip_vputlength_f(ans,L);
       vsip_vputstride_f(ans,D);
       for(i=0; i< num; i++){
           vsip_blockrebind_f(in_block,in_data+i*N);
           vsip_blockadmit_f(in_block,VSIP_TRUE);
           vsip_vcopy_f_f(in,in_V);
           vattr.offset = vattr.offset+n;
           n = vsip_firflt_f(fir,in_V,out_V);
           printf("n = vsip_firflt_f(fir,in,out)\n");
           printf("n= %d",n);
           if(n == L) 
               printf(" ;correct\n");
           else
               printf(" ;error\n");
           printf("input\n"); VU_vprintm_f("3.2",in_V);
           vsip_vputlength_f(out_V,n);
           vsip_vputoffset_f(ans,i*N);
           printf("output #%d\n",i); VU_vprintm_f("3.2",out_V);
           printf("right output #%i\n",i); VU_vprintm_f("3.2",ans);
           {vsip_vview_f *chk = vsip_vcreate_f(n,VSIP_MEM_NONE);
              vsip_vsub_f(ans,out_V,chk); vsip_vmag_f(chk,chk); vsip_vclip_f(chk,.0001,.0001,0,1,chk);
              if(vsip_vsumval_f(chk) > .5)
                  printf("error\n");
              else
                  printf("correct\n");
              vsip_valldestroy_f(chk);
           } 
           vattr.length = n;
           vsip_vputlength_f(out_V,ML);
           vsip_blockrelease_f(in_block,VSIP_FALSE);
       }
       vsip_vdestroy_f(k_V);
       vsip_vdestroy_f(in_V);
       vsip_valldestroy_f(out_V);
       vsip_fir_destroy_f(fir);
       vsip_valldestroy_f(k);
       vsip_valldestroy_f(in);
       vsip_valldestroy_f(ans);
   }
   return;
}
