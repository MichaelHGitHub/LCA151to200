#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data;

    data.input = 10000;
    data.output = 2499;
    testData.push_back(data);

    data.input = 25;
    data.output = 6;
    testData.push_back(data);

    data.input = 3;
    data.output = 0;
    testData.push_back(data);

    data.input = 5;
    data.output = 1;
    testData.push_back(data);

    data.input = 0;
    data.output = 0;
    testData.push_back(data);
}