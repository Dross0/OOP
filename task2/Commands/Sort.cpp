//
// Created by Андрей Гайдамака on 22.10.2019.
//

#include "Sort.h"
#include <algorithm>

Sort::Sort(std::vector<std::string> &data, std::vector<std::string> &args) {
    if (args.size() != 0){
        throw new std::exception("Wrong arguments for command <sort>!")
    }
    data_ = data;
}

std::vector<std::string> Sort::execute() {
    std::sort(data_.begin(), data_.end());
    return data_;
}