main(){

int a=0,b=1,c,n=10;

  printf("%d \n %d \n",a,b);
  for(int i=1;i<n;i++){
  //if(c<n){
    c=b+a;
    printf (" %d \n",c);

    a=b;
    b=c;
  
  //  }
  }
}