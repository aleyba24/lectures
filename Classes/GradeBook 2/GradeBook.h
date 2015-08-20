#ifndef __GRADEBOOK_H
#define __GRADEBOOK_H

#include <string> 


// Class declaration for GradeBook.
// Add a member variable for the instructor's name, plus some lessons on
// overloading operators.
class GradeBook {
private:
   std::string mCourseName; 
   std::string mInstructorName;

public:
   GradeBook(const std::string &name, const std::string &instructor);

   // As before.
   void PrintGreeting();

   // As before.
   const std::string &GetCourseName() const; 
   void SetCourseName(const std::string &newName);

   // New accessor/mutator for the instructor's name. 
   const std::string &GetInstructorName() const; 
   void SetInstructorName(const std::string &newName);

   // NEW STUFF -- fill this in as lecture progresses
   
   // default constructor



   // copy constructor



   // operator <<
   
   
   
   // operator ==
   



   // operator =




















};

#endif