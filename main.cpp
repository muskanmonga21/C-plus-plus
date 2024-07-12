#include<iostream>
using namespace std;

int main(){
    //  //declare a integer type variable
    // int age;
    // //print Enter the score
    // cout<<"Enter the score => " <<endl;
    // //take input into score variable
    // cin>>age;
    // //if condition
    // if(age>=18){
    //      cout<< "I can vote" << endl ;
    // }
    // else{
    //     cout << "I cannot vote" << endl;
    // }
    // //declare a integer type variable
    // int score;
    // //print Enter the score
    // cout<<"Enter the score => " <<endl;
    // //take input into score variable
    // cin>>score;
    // //if condition
    // if(score<300){
    //      cout<< "India Wins" << endl ;
    // }
    // else{
    //     cout << "Pak wins" << endl;
    // }

    // int marks;
    // cin>> marks;

    // if(marks>=90){
    //      cout<< "A Grade";
    // } else{
    //     if(marks>=80){
    //          cout<< "B Grade";
    //     }
    // } 
    //   else {
    //     if(marks >=60){
    //          cout<< "C Grade";
    //     }
    // } else{
    //     if(marks >=40){
    //          cout<< "D Grade";
    //     } 
    // } else {
    //     cout<<"F Grade";
    // }

    //if-elseif-else

    // if(marks >=90){
    //     cout<<"A";
    // } else if(marks >=80){
    //     cout<<"B";
    // } else if(marks >=40){
    //     cout<<"C";
    // } else if(marks >=40){
    //     cout<<"D";
    // } else{
    //     cout<<"F";
    // }

    //loop

    // for(int i=5; i>0; i=i-1 ){
    //     cout<< i << endl;
    // }

    //  for(int i=0; i<5; i=i+1 ){
    //     cout<< "hiiii "<< endl;
    // }

    //  for(int i=0; i<5; i=i+1 ){
    //     cout<< i << endl;
    // }

    //  for(int i=1; i<=10; i=i+1 ){
    //     cout<< 2*i<< endl;
    // }

    //  for(int i=0; i<=5; i=i+2 ){
    //     cout<< i<< endl;
    // }

    //  for(int i=1; i<=5; i=i+2 ){
    //     cout<< i<< endl;
    // }

    //  for(int i=1; i<=10; i=i*2 ){
    //     cout<< i<< endl;
    // }

    //  for(int i=100; i>0; i=i/2 ){
    //     cout<< i<< endl;
    // }

    //  for(int i=5;( i>=0 && i<10); i=i+1){
    //     cout<< i<< endl;
    // }

    // int i=0;
    //  for(; ; i++ ) {
    //     if(i<5) {
    //     cout<< i<< endl;
    //     i =i+1
    //     }
   // }


   //Printng Solid Rectangle
    //outer loop - row observe
    // for(int row =0; row<3; row=row+1){
    //     //inner loop - col observe   
    //     for(int col=0; col<5; col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //revese|| 
    // for(int col=0; col<5; col=col+1){
    //     //inner loop - col observe   
    //     for(int row =0; row<3; row=row+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
     

    //  //Solid Rectangle
    //  //Outer Loop
    //  for(int row =0; row<4; row+=1){
    //     //inner
    //     for(int col=0; col<4; col+=1){
    //         cout<<"* "
    //     }
    //     cout<<endl;
    //  }

    // int n;
    // cin>>n;
    //  //Solid Rectangle
    //  //Outer Loop
    //  for(int row =0; row<n; row+=1){
    //     //inner
    //     for(int col=0; col<n; col+=1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //  }

    // //Hallow Rectangle
    // for(int row =0; row<3; row=row+1){
    //     //first row orlast row -> print 5*
    //     if(row == 0 || row == 2){   
    //     for(int col=0; col<5; col++){
    //         cout<<"* ";
    //     }
    // }
    //  else{
    //     //remaining middle rows
    //     //first star
    //     cout<< "* ";
    //     for(int i=0; i<3; i++){
    //         //spaces
    //         cout<<" ";
    //     }
    //     //last star
    //     cout<<"* ";
    //     }
    // }


    // int rowCount,colCount;
    // cin>> rowCount;
    // cin>> colCount;
    //  //Hallow Rectangle
    // for(int row =0; row<rowCount; row=row+1){
    //     //first row orlast row -> print 5*
    //     if(row == 0 || row == rowCount-1){   
    //     for(int col=0; col<colCount ; col++){
    //         cout<<"* ";
    //     }
    // }
    //  else{
    //     //remaining middle rows
    //     //first star
    //     cout<< "* ";
    //     for(int i=0; i<colCount-2; i++){
    //         //spaces
    //         cout<<" ";
    //     }
    //     //last star
    //     cout<<"* ";
    //     }
    // }

    //Half Pyramid
    // //no. of rows
    // int n;
    // cin>>n;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }

    //Inverse half pyramid
    //no. of rows
    // int n;
    // cin>>n;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }

    // Numeric half Pyramid
    // no. of rows =n
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<col+1;
    //     }
    //     cout<< endl;
    // }

    //Inverse Numeric half Pyramid
   // no. of rows =n
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<<col+1;
    //     }
    //     cout<< endl;
    // }


}  