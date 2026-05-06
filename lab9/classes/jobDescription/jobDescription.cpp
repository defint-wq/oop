#include "../include.h"
#include "jobDescription.h"

JobDescription::JobDescription() {}

JobDescription::JobDescription(string desc) {
    description = desc;
}

void JobDescription::print() const {
    cout << "Мэргэжил: " << description << endl;
}