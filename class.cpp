#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class RectangleArea{
   private:
   int a,b;
   public:
     void read_input(){
         cin>>a>>b;
         
     }
     int display(){
         return a*b;
     }
     
     class Rectangle{
     int a,b;
     public:
     void display();
     
 };
     
};
void RectangleArea::Rectangle::display(){
         cout<<a<<" ";
         cout<<b;
     }
 
 


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}