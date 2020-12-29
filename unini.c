#include<stdio.h>
#include<string.h>
void sort_ascending(char a[10000], int n)
{
int i,j,k;
for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
            {
            k=a[j];
            a[j]=a[i];
            a[i]=k;
            }
        }
    }
}
int main()
{
int i,j,last;
char a[100000],b[100000];
scanf("%s",a);

for(i=0,j=0;i<strlen(a);i+=2,j++)
b[j]=a[i];

//last=strlen(b);
sort_ascending(b,strlen(b));

for(i=0;i<strlen(b);i++)
    {
    printf("%c",b[i]);
    if(i==strlen(b)-1) break;
    printf("+");
    }
printf("%c\n",b[strlen(b)]);
}
