# Principles of Programming Languages assignment

Birla Institute of Technology & Science, Pilani – K K Birla Goa Campus
First Semester: 2016-2017
Assignments (Part III)
August 24, 2016
Course No.: CS F301
Course Title: Principles of Programming Languages
Instructor-in-Charge: Prof. Santonu Sarkar. Instructor : Soumyadip Bandyopadhyay
E-mails:
santonus@goa.bits-pilani.ac.in;
soumyadipb@goa.bits-pilani.ac.in

##Q3 Fancy Iterator- STL Style

In the class you learnt the notion of a generator and iterator. These are cleaner idiom for iterating
over a sequence without a need to know how the sequence is generated. Consider a generator
that generates string of size l over a set of alphabets a, b, c, d in a lexicographically sorted order.
Implement this in C++ and Java. Your implementation MUST NOT store an explicit representation
of the entire sequence of strings. Call this class as LexGen. The created object should have constant
size, independent of l.
For C++ code 
1. The class should be such that new LexGen(len) creates an object that represents the lexicographically sorted sequence of all strings over the above alphabet of length=len.
2. The class should provide methods begin() and end(). Both return an iterator of type
LexGen::iterator. The iterator returned by begin() points to the first element in the sequence of
strings, the one returned by end() points beyond the end of the sequence of strings.
3. The iterator class itself should provide a dereferencing operator and an increment operator.
The usage of this iterator should be:

``` C++
LexGen l(3);
for (LexGen::iterator it = l.begin(); it != l.end(); ++it)
  cout << *it << endl;
```

Similarly, for the Java code: 
1. The class should be such that new LexGen(len) creates an
object that represents the lexicographically sorted sequence of all strings over the above alphabet of
length=len.
2. The class should provide a method elements(), which returns an object of type Enumeration that implements the Enumeration interface. As such LexGen needs to provide methods
hasMoreElements() and nextElement(), which test whether there are more elements in the sequence to be traversed and return the next element in the sequence if there are any, respectively.
The usage would be:

```Java
LexGen l = new LexGen(3);
Enumeration e = l.elements();
while (e.hasMoreElements())
  System.out.println(e.nextElement());
```
