// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of
// each number sorted in non-decreasing order.

#include<iostream>
#include<vector>
using namespace std ;

void fun( vector<int> &vec ){

    int starting_pt = 0, ending_pt = vec.size() - 1 ;

    while( starting_pt < ending_pt ){

        if( abs( vec[starting_pt] ) > abs( vec[ending_pt] ) ){
            
            int temp = vec[starting_pt] ;
            vec[starting_pt] = vec[ending_pt] ;
            vec[ending_pt] = temp ;

            starting_pt ++ ;
            ending_pt -- ;

        }

        else if( abs( vec[starting_pt] ) <= abs( vec[ending_pt] ) ){
            ending_pt -- ;
        }
    }
}

int main(){

    int size ;

    cout << "Enter size : " ;
    cin >> size ;

    vector<int> vec ;

    for( int i = 0; i < size; i++ ){

        int temp ;

        cout << "Enter " << i+1 << " element : " ;
        cin >> temp ;

        vec.push_back( temp ) ;
        
    }

    fun( vec ) ;
    
    cout << endl ;

    for( int i = 0; i < size; i++ ){
        cout << vec[i] << " " ;
    }

    return 0 ;
}