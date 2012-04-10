#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

using namespace std;

class Document
{
private:
    string name_;
    int occurence_;
public:
    Document();
    Document(string name);
    string name();
    void name(string name);
    int occurrence();
    void occurrence(int occurrence);
    void increaseOccurrence(int n);
};

#endif // DOCUMENT_H
