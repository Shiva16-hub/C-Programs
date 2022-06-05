
//Patterns programe

#include <iostream>

using namespace std;

int main(){
    
        //rectanglular pattern
    /*
    
    int row,col;
    cin>>row>>col;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
      
      output - 3 3
              * * *
              * * *
              * * *
    
    */
    
         //hollow rectangle pattern
/*      int row,col;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
           
        }
         cout<<endl;
    }
    return 0;
        output - 4 5
        * * * *
        *     *
        *     *
        *     *
        * * * *
*/

            //Inverted half pyramid
/*        int n;
        cin>>n;
        
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        
            cout<<endl;
        }
        
        return 0;
        
        output = 5
        *****
        ****
        ***
        **
        *
        
        */
        
            // Half pyramid after 180' rotation
  /*      int n;
        cin>>n;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j<=n-i){
                    cout<<" ";
                
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        }
        return 0;
        
        output = 5
             *
            **    
           ***
          ****
         *****
         
         */
         
            // Half pyramid using numbers
/*         int n;
         cin>>n;
         
         for(int i=1;i<=n;i++){
             for(int j=1;j<=i;j++){
                 cout<<i<<" ";
             }cout<<endl;
         }
         return 0;
         
         output = 5
         1 
         2 2 
         3 3 3 
         4 4 4 4 
         5 5 5 5 5
         
         */
         

            //Floyds triangle
/*         int n;
         cin>>n;
         
         int count=1;
         
         for(int i=1;i<=n;i++){
             for(int j=1;j<=i;j++){
                 cout<<count<<" ";
                 count++;
             }
             cout<<endl;
         }
         return 0;
         
         output = 5
         1 
         2 3 
         4 5 6 
         7 8 9 10 
         11 12 13 14 15
         
        */
        
        int n;
        cin>>n;
       
       for(int i=1;i<=n;i++){
           for(int j=1;j<=i;j++){
               cout<<"*";
           }
           int space = 2*n - 2*i;
           for(int j=1;j<=space;j++){
               cout<<" ";
           }
           for(int j=1;j<=i;j++){
               cout<<"*";
           }
           cout<<endl;
       }
       for(int i=n;i<=1;i--){
           for(int j=1;j<=i;j++){
               cout<<"*";
           }
           int space = 2*n - 2*i;
           for(int j=1;j<=space;j++){
               cout<<" ";
           }
           for(int j=1;j<=i;j++){
               cout<<"*";
           }
           cout<<endl;
       }
           return 0; 
          output = 8
            *                             *
            * *                         * *
            * * *                     * * *
            * * * *                 * * * *
            * * * * *             * * * * *
            * * * * * *         * * * * * * 
            * * * * * * *     * * * * * * *           
            * * * * * * * * * * * * * * * *

}
   
   
