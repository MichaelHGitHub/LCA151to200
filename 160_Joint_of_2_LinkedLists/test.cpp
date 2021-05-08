#include "header.h"

void PrepareTestData(vector<TD_L_L_L>& testData)
{
    TD_L_L_L data;

    data.input = GenerateLinkedList({ 4,1,8,4,5 });
    data.input2 = GenerateLinkedList({ 5,6,1,8,4,5 });
    data.output = GenerateLinkedList({ 8 });
    testData.push_back(data);

    data.input = GenerateLinkedList({ 1,9,1,2,4 });
    data.input2 = GenerateLinkedList({ 3,2,4 });
    data.output = GenerateLinkedList({ 2 });
    testData.push_back(data);

    data.input = GenerateLinkedList({ 2,6,4 });
    data.input2 = GenerateLinkedList({ 1,5 });
    data.output = GenerateLinkedList({ });
    testData.push_back(data);
}