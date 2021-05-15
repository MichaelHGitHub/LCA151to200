#include "header.h"

void PrepareTestData(vector<TD_T_VI>& testData)
{
    TD_T_VI data;

    data.input = GenerateTree({ 1,2,3,NULL_NODE_VALUE,5,NULL_NODE_VALUE,4 });
    data.output = { 1,3,4 };
    testData.push_back(data);


    data.input = GenerateTree({ 1,NULL_NODE_VALUE,3 });
    data.output = { 1,3 };
    testData.push_back(data);

    data.input = GenerateTree({});
    data.output = {};
    testData.push_back(data);

}