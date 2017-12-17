# include <iostream>
# include <conio.h>
using namespace std;
int main()
{
int mat[10][10] ;
int i, j, row, col, sum;
cout<<"Enter the order of the matrix : " ;
cin>>row>>col;
cout<<"\nEnter the elements of the matrix : \n\n" ;
for(i = 0 ; i < row ; i++)
  for(j = 0 ; j < col ; j++)
    cin>>mat[i][j];
for(i = 0 ; i < row ; i++)
  for(j = 0 ; j < col ; j++)
  if(i==j){
    sum = sum + mat[i][j] ;}
cout<<"\nThe sum of the elements in the matrix is :"<< sum;
return 0;
getch() ;
}
