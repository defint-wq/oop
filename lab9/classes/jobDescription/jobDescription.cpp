#include "../include.h"
#include "JobDescription.h"

JobDescription::JobDescription() {}

JobDescription::JobDescription(string desc) {
    Description = desc;
}

void JobDescription::print() const {
    cout << "Mergejil: " << Description << endl;
}