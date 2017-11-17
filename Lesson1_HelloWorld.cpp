//this is the c++ version of the hello world code.
//the
/*comments
  are
  the 
  same
  as 
  in
  c   */

//this time we will be including iostream
#include <iostream>

//this next statment is optional, but I'd use it... It's less typing in the long run
using namespace std;

int main(void){//this is the same setup as in c.  For now, just put this around all code

//This is how we print in c++ the arrows have to be pointing to the left.
std::cout <<"This is the first message. "<< "This is the second." << std::endl;
/*Notice how we can string messages together using consecutive brackets. This seems
  redundant now, but you'll see how it can be useful later.
 
  The std::endl is the exact same thing as putting \n at the end of the line you can
  use whichever you prefer.

  Because we wrote using namespace std;  We don't have to put std:: in front of the built
  in function we use.  We can just write:
 */

cout <<"This is the third message.\n"<< "This is the forth."<< endl;

/* We can only write the code as above if we include using namespace std; if not
   the code will give an error.

   I also put a \n to show that it still works the same as in c
*/



return 0;//always end code with this to tell the computer it executed correctly.
}
