// Given a vector, which should be consist of only integers. Write an algoritm in which you move all 
// the even numbers tho theleft side 

#include<iostream>
#include<vector>
using namespace std ;

void fun( vector<int> &vec ){

    int starting_pt = 0, ending_pt = vec.size() - 1 ;
    
    while( starting_pt < ending_pt ){

        if( vec[starting_pt] % 2 == 1 && vec[ending_pt] % 2 == 0 ){

            int temp = vec[starting_pt] ;
            vec[starting_pt] = vec[ending_pt] ;
            vec[ending_pt] = temp ;

            starting_pt ++ ;
            ending_pt -- ;

        }

        else if( vec[starting_pt] % 2 == 0 && vec[ending_pt] % 2 == 1 ){

            starting_pt ++ ;
            ending_pt -- ;

        }

        else if( vec[starting_pt] % 2 == 0 && vec[ending_pt] % 2 == 0 ){
            starting_pt ++ ;
        }

        else if( vec[starting_pt] % 2 == 1 && vec[ending_pt] % 2 == 1 ){
            ending_pt -- ;
        }  
    }
}

int main(){

    int size ;

    cout << "Enter size " ;
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