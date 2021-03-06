/* Created RJudd May 18, 1999 */
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
/* $Id: VUX_vxyplotsize_f.c,v 2.0 2003/02/22 15:20:01 judd Exp $ */
#include<stdio.h>
#include<string.h>
#include<vsip.h>
#include<VUX.h>

void VUX_vxyplotsize_f(
         VUX_graph_f* graph,
         int wlength,
         int wheight,
         int xlength,
         int ylength,
         int wlocleft,
         int wlocdown)
{
     if(wlength != -1) graph->xsize = xlength;
     if(wlength != -1) graph->ysize = ylength;
     if(wlength != -1) graph->xpixels = wlength;
     if(wlength != -1) graph->ypixels = wheight;
     graph->xwinpos = wlocleft;
     graph->ywinpos = wlocdown;
     return;
}
