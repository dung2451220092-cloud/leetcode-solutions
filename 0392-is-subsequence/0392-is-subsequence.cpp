class Solution {
public:
bool Solve( string& s , string t , int R , int P  ){
        //  Base Case :
       if( R < 0 ) return true;
       if( P < 0 ) return false;

        // Logic :
       if( s[R] == t[P] ){
         return  Solve( s , t , R - 1 , P - 1 );
       }else{
         return Solve( s , t , R , P - 1 );
       }
}
    bool isSubsequence(string s, string t) { 
          return Solve( s , t , s.size() - 1 , t.size() - 1 );
    }
};