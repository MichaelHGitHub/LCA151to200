#include "header.h"

void PrepareTestData(vector<TD_VVC_I>& testData)
{
    TD_VVC_I data;

    data.input = {
    {'1', '1', '1'},
    {'0', '1', '0'},
    {'1', '1', '1'} };
    data.output = 1;
    testData.push_back(data);

    data.input = { 
        {'1', '1', '1'},
        {'0', '1', '0'},
        {'0', '1', '0'} };
    data.output = 1;
    testData.push_back(data);

    data.input = {
            {'1', '1', '1', '1', '0'},
            {'1', '1', '0', '1', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '0', '0', '0'}
    };
    data.output = 1;
    testData.push_back(data);

    data.input = {
            {'1', '1', '0', '0', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '1', '0', '0'},
            {'0', '0', '0', '1', '1'}
    };
    data.output = 3;
    testData.push_back(data);
}