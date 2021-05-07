#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 0,2 };
    data.output = 2;
    testData.push_back(data);

    data.input = { -4,-3,-2 };
    data.output = 12;
    testData.push_back(data);

    data.input = { 2,3,-2,4 };
    data.output = 6;
    testData.push_back(data);

    data.input = { -2,0,-1 };
    data.output = 0;
    testData.push_back(data);
}