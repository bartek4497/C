#include<iostream>

using namespace std;
 
sortowanie(int tab[],int n)
{
  for(int i=0;i<n;i++)
    for(int j=1;j<n-i;j++)
    if(tab[j-1]>tab[j])
    
      swap(tab[j-1], tab[j]);
}
 
int main()
{
  int *tab, n;
 
  cout<<"Ile liczb bedziesz chcia³ posortowac?\n ";
  cin>>n;
 
 cout<<"Wypisz liczby ktore chcesz posortowac\n";

  for(int i=0;i<n;i++)
    cin>>tab[i];
 
  sortowanie(tab,n);

  for(int i=0;i<n;i++)
          cout<<tab[i]<<" ";
 
  
  return 0;
}
