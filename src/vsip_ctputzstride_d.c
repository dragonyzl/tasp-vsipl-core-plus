/* Created RJudd September 30, 2000 */
/* SPAWARSYSCEN D857                */
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
/* $Id: vsip_ctputzstride_d.c,v 2.0 2003/02/22 15:18:49 judd Exp $ */


#include"VI_support_cpriv_d.h"

vsip_ctview_d* (vsip_ctputzstride_d)(
  vsip_ctview_d *v,
  vsip_stride s) {
    v->z_stride = s;
    return v;
}
