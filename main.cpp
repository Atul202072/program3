#include<iostream>
using namespace std;
    void sum(int, int);
    int main()
    {
        int rows, colm;
        cout<<"Enter the number of rows: ";
        cin>>rows;
        cout<<"Enter the number of columns: ";
        cin>>colm;
        sum(rows, colm);
        return 0;
    }
    
    void sum(int a, int b)
    {
       int arr1[a][b], arr2[a][b], arr3[a][b];
       cout << "Enter the elements of matrix1: "<<endl;
       for (int i = 0;i<a;i++ ) 
       { for (int j = 0;j<b;j++) 
       {  cin>>arr1[i][j];}
    }
    
    cout << "Enter the elements of matrix2: "<<endl;
    for (int i = 0;i<a;i++) 
   {
     for (int j = 0;j<b;j++) 
     {
       cin>>arr2[i][j];
     }
   }
   //for addition
    for (int i = 0;i<a;i++ ) 
    { 
     for (int j = 0;j<b;j++ ) 
      {
       arr3[i][j]=arr1[i][j]+arr2[i][j];
      }
    }
    //Result of addition
    cout<<"The sum of the matrix is: ";
    cout<<endl;
    for(int i = 0; i < a; ++i)
    {
     for(int j = 0; j < b; ++j)
        {
            cout << arr3[i][j] << "  ";
            if(j == b - 1)
            cout << endl;
        } 
    }
    
   //for sub
    for (int i = 0;i<a;i++ ) 
    { 
     for (int j = 0;j<b;j++ ) 
      {
       arr3[i][j]=arr1[i][j]-arr2[i][j];
      }
    }
    //Result of sub
    cout<<"The difference of the matrix is: ";
    cout<<endl;
    for(int i = 0; i < a; ++i)
    {
     for(int j = 0; j < b; ++j)
        {
            cout << arr3[i][j] << "  ";
            if(j == b - 1)
            cout << endl;
        } 
    }
    
    //for multiplication
    for (int i = 0;i<a;i++ ) 
    { 
     for (int j = 0;j<b;j++ ) 
      {
       arr3[i][j]=arr1[i][j]*arr2[i][j];
      }
    }
    //Result of multiplication
    cout<<"The multiplication of the matrix is: ";
    cout<<endl;
    for(int i = 0; i < a; ++i)
    {
     for(int j = 0; j < b; ++j)
        {
            cout << arr3[i][j] << "  ";
            if(j == b - 1)
            cout << endl;
        } 
    }
    //transpose
    for (int i = 0;i<a;i++ ) 
    { 
     for (int j = 0;j<b;j++ ) 
      {
       arr3[i][j]=arr1[j][i];
      }
    }
    //result of transpose
    cout<<"The transpose of the matrix1 is: ";
    cout<<endl;
    for(int i = 0; i < a; ++i)
    {
     for(int j = 0; j < b; ++j)
        {
            cout << arr3[i][j] << "  ";
            if(j == b - 1)
            cout << endl;
        } 
    }
    //transpose
    for (int i = 0;i<a;i++ ) 
    { 
     for (int j = 0;j<b;j++ ) 
      {
       arr3[i][j]=arr2[j][i];
      }
    }
    //result of transpose
    cout<<"The transpose of the matrix2 is: ";
    cout<<endl;
    for(int i = 0; i < a; ++i)
    {
     for(int j = 0; j < b; ++j)
        {
            cout << arr3[i][j] << "  ";
            if(j == b - 1)
            cout << endl;
        } 
    }
}
