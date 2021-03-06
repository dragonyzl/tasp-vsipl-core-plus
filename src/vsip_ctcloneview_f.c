/* Created RJudd */
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
/* $Id: vsip_ctcloneview_f.c,v 2.0 2003/02/22 15:18:48 judd Exp $ */

#define VI_CTVIEW_F_
#include"VI_support_cpriv_f.h"

vsip_ctview_f *vsip_ctcloneview_f(
    const vsip_ctview_f *ctview_in)
{
   vsip_ctview_f *ctview = VI_ctview_f();
   if(ctview != NULL) *ctview = *ctview_in;
   return ctview;
}
     

