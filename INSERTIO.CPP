#include<stdio.h>
#include<conio.h>
#include<graphics.h>
       void draw(int,int,int);
       void insert(int[],int);
void main(){
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 int n;
 printf("enter how many numbers you wants to do insertion sort\n");
 scanf("%d",&n);
 //now storing the element to an array
 printf("enter the elements for an array:\n");
 int a[100],i;
 for(i=0;i<n;i++){
   scanf("%d",&a[i]);
 }
 //just print the element what you hve given
 for(i=0;i<n;i++){
  setcolor(GREEN);
  draw(100+i*100,200,a[i]);
  getch();


 }
 //for insertion sorting
 insert(a,n);
 //draw line
 settextstyle(9,0,3);
 setcolor(BROWN);
 outtextxy(100,270,"insertion sort answer");
 line(50,250,450,250);
// after sorting
for(i=0;i<n;i++){
 setcolor(RED);
 draw(100+i*100,400,a[i]);
 getch();

}
 getch();

}

void draw(int x,int y,int a){
  char s[20];
  sprintf(s,"%d",a);
  circle(x,y,40);
  settextstyle(8,0,6);
  setcolor(GREEN);
  outtextxy(x-8,y-33,s);
}

void insert(int b[],int n){
   int temp,i,j;
   for(i=1;i<n;i++){
    temp=b[i];
    j=i-1;
    while((temp<b[j])&&(j>=0)){
      b[j+1]=b[j];
      j=j-1;
    }

    b[j+1]=temp;
   }


}