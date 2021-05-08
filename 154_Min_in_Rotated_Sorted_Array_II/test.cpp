#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 1,3,5 };
    data.output = 1;
    testData.push_back(data);

    data.input = { 2,2,2,0,1 };
    data.output = 0;
    testData.push_back(data);

}