#include <iostream>
#include <cmath>
using namespace std;

   double deg2rad(double deg){

        return deg*M_PI/180 ;

    }
   double rad2deg(double rad){

        return rad*180/M_PI ;

    }
    double findXComponent(double a1,double a2,double b1, double b2){
        
        return a1*cos(b1) + a2*cos(b2);
    }
    double findYComponent(double a1,double a2,double b1, double b2){
        
        return a1*sin(b1) + a2*sin(b2);
    }
    double pythagoras(double xcomp, double ycomp){
        return sqrt(pow(xcomp,2)+pow(ycomp,2)) ;
    }
    void showResult(double l, double d){
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%/n";
        cout << "Length of the resultant vector = "<<l<<"\n";
        cout << "Direction of the resultant vector (deg) = "<<d<<"\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ";
    }

int main(){

    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;


    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
