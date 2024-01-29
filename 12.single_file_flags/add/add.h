#pragma once
#include <cstdio>

#define LOG(fmt, args...) printf("[%s:%s:%d]" fmt "\n", __SHORT_FILE__, __FUNCTION__, __LINE__, ##args)

int add(int a, int b);
