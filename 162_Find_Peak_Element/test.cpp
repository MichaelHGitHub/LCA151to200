#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 1,2,3,1 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 1,2,1,3,5,6,4 };
    data.output = 5;
    testData.push_back(data);
}