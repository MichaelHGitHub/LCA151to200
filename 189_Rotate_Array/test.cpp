#include "header.h"

void PrepareTestData(vector<TD_VI_I_VI>& testData)
{
    TD_VI_I_VI data;

    data.input = { 1, 2, 3 };
    data.input2 = 2;
    data.output = { 2, 3, 1 };
    testData.push_back(data);

    data.input = { 1 };
    data.input2 = 1;
    data.output = { 1 };
    testData.push_back(data);

    data.input = { 1 };
    data.input2 = 0;
    data.output = { 1 };
    testData.push_back(data);

    data.input = { 1, 2, 3, 4};
    data.input2 = 2;
    data.output = { 3, 4, 1, 2 };
    testData.push_back(data);

    data.input = { 1, 2, 3, 4 };
    data.input2 = 3;
    data.output = { 2, 3, 4, 1 };
    testData.push_back(data);

    data.input = { 1,2,3,4,5,6,7, 8 };
    data.input2 = 2;
    data.output = { 7,8,1,2,3,4, 5,6 };
    testData.push_back(data);

    data.input = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27 };
    data.input2 = 38;
    data.output = {17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
    testData.push_back(data);

    data.input = { 1,2,3 };
    data.input2 = 4;
    data.output = {3, 1, 2 };
    testData.push_back(data);

    data.input = { -1,-100,3,99 };
    data.input2 = 2;
    data.output = { 3,99,-1,-100 };
    testData.push_back(data);

    data.input = { 1,2,3,4,5,6,7 };
    data.input2 = 3;
    data.output = { 5,6,7,1,2,3,4 };
    testData.push_back(data);
    
}