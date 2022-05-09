#include<bits/stdc++.h>
using namespace std;
class ProbDistribution {
public :
        virtual float getExpected() = 0;
        virtual float getVariance() = 0;
};

class BinomialDistribution : public ProbDistribution {
  int p , n , q ;

  public :
        BinomialDistribution(int n , int p , int q){
                this->p = p;
                this->n = n ;
                this->q = q ;
        }
  float getExpected(){
          return n * p  ;
  }

  float getVariance(){
          return n * p * q;
  }

};

class GeometricDistribution : public ProbDistribution {
        int p , q;

public :
        GeometricDistribution(int a , int b){
        p = a;
        q = b ;
        }
        float getExpected(){
             return 1 * 1.0 / p;
        }

        float getVariance(){
                q * 1.0 / (p * p);
        }
};

int main(){

        int n , p , q;

        cout << "\t Binomial Distribution : " << endl ;

        cout << "Please enter value of n : " ;
        cin >> n;
        cout << "Please enter value of p : " ;
        cin >> p;
        cout << "Please enter value of q : " ;
        cin >> q ;

        BinomialDistribution obj(n , p , q);

        cout << "Mean : " << obj.getExpected() << endl;
        cout << "Variance : " << obj.getVariance() << endl ;

        cout << "\tGeometrical Distribution  " << endl ;

        cout << "Please enter value of p : " ;
        cin >> p;
        cout << "Please enter value of q : " ;
        cin >> q ;

        GeometricDistribution ob(p , q);

        cout << "Mean : " << ob.getExpected() << endl;
        cout << "Variance : " << ob.getVariance() << endl ;
        return 0;
}
