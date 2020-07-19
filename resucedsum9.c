int main()
{
    int n,i,temp=9,rem,max;
    printf("enter the range for integers:");
    scanf("%d %d",&i,&max);
    for(i;i<max;++i)
    {
     n=i;  
     temp=9;
     while(n)
      {
        rem=n%10;
        if(rem>temp)
          {
            break;
          }
        temp=rem;
        n=n/10;
      }
     if(n==0 && i%9==0)
        {
          printf("%d ",i);
        }
    }
   return 0;
}
