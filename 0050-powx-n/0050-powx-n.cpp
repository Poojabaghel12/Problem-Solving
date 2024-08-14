class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0) {
            return 1;
        }

        // Handle negative power
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }

        double temp = myPow(x, n / 2);
        temp = temp * temp;

        if (n % 2 == 0) {
            return temp;
        } else {
            return temp * x;
        }
    }
};        
       // if(n==0){
   //         return 1;
     //   }
       // double temp = myPow(x, n/2);
  //      temp = temp*temp;
    //    if(n%2==0){
      //      return temp;
 //       }else{
   //         return temp*x;
     //   }
      //  double res = 1;
        //for(int i=0; i<n; i++){
         //   res=res*x;
        //}
        //return res;
  //  }
//};