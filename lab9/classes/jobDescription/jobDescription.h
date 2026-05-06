#ifndef JOBDESCRIPTION_H
#define JOBDESCRIPTION_H

#include "../include.h"

class JobDescription {
private:
    string Description;

public:
    JobDescription();
    JobDescription(string desc);

    void print() const;
};

#endif