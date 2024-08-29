// Ques: Given an array of integers numbers that is already sorted in non-decreasing order,
// find two numbers such that they add up to a specific target number.

#include<iostream>
using namespace std ;

int main(){

    int n ;

    cout << "Enter Target number : " ;
    cin >> n ;

    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;

    int i = 0, j = 9 ;

    while( i < j ){

        if( arr[i] + arr[j] == n ){

            cout << "Those two numbers are : " << arr[i] << " and " << arr[j] ;  
            return 0 ;

        }

        else if( arr[i] + arr[j] > n ){
            j-- ;
        }

        else if( arr[i] + arr[j] < n ){
            i++ ;
        }


    }    

    cout << "You enter a very big number !" ;

    return 0 ;

}