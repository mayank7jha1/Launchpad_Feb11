#include <sstream>
using namespace std;

template <typename S, typename T>
class Pair
{
public:
   Pair();
   Pair(S, T);
   Pair(Pair &);
   ~Pair();
   const Pair &operator=(const Pair &other);

   string toString();

   S* getFirst();
   T* getSecond();
   int getPairCount();

   void setFirst(S);
   void setSecond(T);

private:
   S *f;
   T *s;
   static int count;

};

template <typename S, typename T>
int Pair<S, T>::count = 0;

// 0-parameter constructor
template <typename S, typename T>
Pair<S, T>::Pair()
{
   f = NULL;
   s = NULL;
   count++;
}

// 2-param constructor
template <typename S, typename T>
Pair<S, T>::Pair(S x, T y)
{
   f = new S;  *f = x;
   s = new T;  *s = y;
   count++;
}


// get first element in pointer
template <typename S, typename T>
S* Pair<S, T>::getFirst()
{
   if (f != NULL)
   {  S *tmp = new S;
      *tmp = *f;
      return tmp;
   }
   else
      return NULL;
}

// get second element in pointer
template <typename S, typename T>
T* Pair<S, T>::getSecond()
{
   if (s != NULL)
   {
      T *tmp = new T;
      *tmp = *s;
      return tmp;
   }
   else
      return NULL;
}

// set first element
template <typename S, typename T>
void Pair<S, T>::setFirst(S x)
{
   if (f == NULL)
      f = new S;
   *f = x;
}

// set second element
template <typename S, typename T>
void Pair<S, T>::setSecond(T y)
{
   if (s == NULL)
      s = new T;
   *s = y;
}

// make a string representation
template <typename S, typename T>
string Pair<S, T>::toString()
{
   stringstream ss;
   ss << "(";
   if (f == NULL)
      ss << "NULL";
   else
      ss << (*f);
   ss << ",";
   if (s == NULL)
      ss << "NULL";
   else
      ss << (*s);
   ss << ")";
   return ss.str();
}

// keep count
template <typename S, typename T>
int Pair<S, T>::getPairCount() {
   return count;
}

//copy constructor
template <typename S, typename T>
Pair<S, T>::Pair(Pair &other)
{
   f = NULL; s = NULL;
   if (other.f != NULL)
      f = new S(*other.f);

   if (other.s != NULL)
      s = new T(*other.s);

   count++;
}
//destructor

template <typename S, typename T>
Pair<S, T>::~Pair()
{
   if (f != NULL)
      delete f;

   if (s != NULL)
      delete s;

   f = NULL;
   s = NULL;

   count--;
}

//deep assignment

template <typename S, typename T>
const Pair<S, T> & Pair<S, T>::operator=(const Pair<S, T> &other)
{
   if (this != &other)
   {
      if (f != NULL)
         delete f;

      if (s != NULL)
         delete s;

      f = NULL; s = NULL;

      if (other.f != NULL)
         f = new S(*other.f);

      if (other.s != NULL)
         s = new T(*other.s);
   }
   return *this;
}