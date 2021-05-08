#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 4,5,6,7,0,1,2 };
    data.output = 0;
    testData.push_back(data);

    data.input = { 2, 1 };
    data.output = 1;
    testData.push_back(data);

    data.input = { 3,4,5,1,2 };
    data.output = 1;
    testData.push_back(data);

    data.input = { 11,13,15,17 };
    data.output = 11;
    testData.push_back(data);
}