/* Created RJudd June 5, 2002 */
/* SPAWARSYSCEN D881          */
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
/* $Id: VI_cblockfind_f_ai.h,v 2.0 2003/02/22 15:18:28 judd Exp $ */
/* vsip_cblockfind_f always interleaved */

if(b->admit == VSIP_RELEASED_BLOCK){
   *Rp = b->Rp;
   *Ip = b->Ip;
} else {
   *Rp = (vsip_scalar_f*)NULL;
   *Ip = (vsip_scalar_f*)NULL;
}
