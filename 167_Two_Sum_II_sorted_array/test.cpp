#include "header.h"

void PrepareTestData(vector<TD_VI_I_VI>& testData)
{
    TD_VI_I_VI data;
    data.input = { 2,3,4 };
    data.input2 = 6;
    data.output = { 1,3 };
    testData.push_back(data);

    data.input = { -1,0 };
    data.input2 = -1;
    data.output = { 1,2 };
    testData.push_back(data);
}