#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[10][10],Transpose[10][10];
   
   
   cout<<"Enter the number of rows: ";
   cin>>row;

   cout<<"Enter the number of column: ";
   cin>>col;
   
   cout << "Enter the elements of first matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
  

   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        Transpose[i][j]=m1[j][i];
      }
   }
   
      cout<<"Output: ";
      cout<<endl;
      for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
        {
            cout << Transpose[i][j] << "  ";
            if(j == col - 1)
            cout << endl;
        }
   return 0;
}
