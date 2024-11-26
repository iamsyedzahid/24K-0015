#include <stdio.h>
#include <stdio.h>
int main()
{
int i,j,nq=9;//nq is a odd number which represents the order of the matrix
int lim=(int)nq/2,cnt=2;
int a[nq][nq];
 for(i=0;i<nq;i++){
    for(j=0;j<nq;j++)
    a[i][j]=0;
    }
a[lim][lim]=1;
a[lim][lim+1]=2;
int i1=lim,j1=lim+1;i=lim,j=lim;
while(1){
       if(cnt>(nq*nq))
         break;
        cnt++;
if(i==i1)
{  j=j1;
   if(i<=lim)
   {
       i=i1;
    if(a[i1+1][j1]==0)
        a[++i1][j]=cnt;
    else
       a[i1][++j1]=cnt;
   }
   else
   {   i=i1;
    if(a[i1-1][j1]==0)
       a[--i1][j1]=cnt;
    else
        a[i1][--j1]=cnt;
   }
}
else
{   i=i1;
    if(j<lim)
   {
        j=j1;
       if(a[i1][j+1]==0)
        a[i1][++j1]=cnt;
       else
        a[--i1][j1]=cnt;
   }
   else
   {    j=j1;
       if(a[i1][j1-1]==0)
        a[i1][--j1]=cnt;
       else
        a[++i1][j1]=cnt;
   }
  }
}
for(i=0;i<nq;i++){
    for(j=0;j<nq;j++)
    printf(" %d    ",a[i][j]);
    printf("\n");
}

}