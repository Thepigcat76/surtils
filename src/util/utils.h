//
// Created by thepigcat on 2/27/24.
//

#pragma once

#include <stdlib.h>

#define BLUE "\033[1;34m"
#define RED "\033[1;31m"
#define WHITE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

#define BOLD "\033[1m"
#define STANDARD "\033[0m"

#define STRINGIFY(x) #x

void printStackTrace();

void processRootDir();
